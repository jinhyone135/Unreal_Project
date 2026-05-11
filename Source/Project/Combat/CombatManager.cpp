#include "Combat/CombatManager.h"
#include "Combat/DeckComponent.h"
#include "Combat/EnemyBase.h"
#include "Cards/CardBase.h"
#include "Characters/PartyCharacter.h"
#include "Run/RunState.h"
#include "Run/MasterDeck.h"

ACombatManager::ACombatManager()
{
    PrimaryActorTick.bCanEverTick = false;
    Deck = CreateDefaultSubobject<UDeckComponent>(TEXT("Deck"));
}

void ACombatManager::BootstrapFromRunState(URunState* RunState, UDataTable* CardTable)
{
    if (!RunState || !RunState->MasterDeck || !CardTable || !Deck) return;

    // RunState에서 플레이어 파티 HP 이어받기 (Run 진행 간 보존)
    if (RunState->PlayerMaxHP > 0)
    {
        PlayerMaxHP = RunState->PlayerMaxHP;
    }
    if (RunState->PlayerHP > 0)
    {
        PlayerHP = RunState->PlayerHP;
    }
    else
    {
        PlayerHP = PlayerMaxHP;
    }
    PlayerBlock = 0;

    EnemyHP = EnemyMaxHP;
    EnemyBlock = 0;

    TArray<UCardBase*> Materialized =
        RunState->MasterDeck->MaterializeForCombat(this, CardTable);

    for (UCardBase* Card : Materialized)
    {
        if (!Card) continue;
        const FName OwnerID = Card->GetOwnerCharacterID();
        for (APartyCharacter* Member : Party)
        {
            if (Member && Member->GetCharacterID() == OwnerID)
            {
                Card->SetOwnerCharacter(Member);
                break;
            }
        }
    }

    Deck->InitializePiles(Materialized);
}

void ACombatManager::BootstrapTestDeck(const TArray<FName>& TestCardIDs, UDataTable* CardTable)
{
    if (!CardTable || !Deck) return;

    // HP/Block 기본값으로 초기화 (RunState 없이 단독 실행)
    PlayerHP = PlayerMaxHP;
    PlayerBlock = 0;
    EnemyHP = EnemyMaxHP;
    EnemyBlock = 0;

    // 카드ID 배열로부터 UCardBase 생성
    static const FString Ctx(TEXT("BootstrapTestDeck"));
    TArray<UCardBase*> Materialized;
    for (const FName& ID : TestCardIDs)
    {
        const FCardDataRow* Row = CardTable->FindRow<FCardDataRow>(ID, Ctx);
        if (!Row) continue;
        UCardBase* Card = NewObject<UCardBase>(this);
        Card->InitFromData(*Row);
        Materialized.Add(Card);
    }

    // 각 카드의 소유자(Owner) 파티 멤버 설정 (CharacterID 매칭)
    for (UCardBase* Card : Materialized)
    {
        if (!Card) continue;
        const FName OwnerID = Card->GetOwnerCharacterID();
        for (APartyCharacter* Member : Party)
        {
            if (Member && Member->GetCharacterID() == OwnerID)
            {
                Card->SetOwnerCharacter(Member);
                break;
            }
        }
    }

    Deck->InitializePiles(Materialized);
}

void ACombatManager::AddPartyMember(APartyCharacter* Member)
{
    if (Member) Party.AddUnique(Member);
}

void ACombatManager::AddEnemy(AActor* Enemy)
{
    if (Enemy) Enemies.AddUnique(Enemy);
}

void ACombatManager::StartCombat()
{
    if (Deck) Deck->ShuffleDrawPile();

    // 적 의도 미리 표시
    TArray<APartyCharacter*> RawParty;
    for (auto& P : Party) RawParty.Add(P);
    for (AActor* EnemyActor : Enemies)
    {
        if (AEnemyBase* Enemy = Cast<AEnemyBase>(EnemyActor))
        {
            Enemy->GenerateIntent(RawParty);
        }
    }

    StartPlayerTurn();
}

void ACombatManager::StartPlayerTurn()
{
    CurrentPhase = ETurnPhase::PlayerTurn;
    CurrentCost = MaxCostPerTurn;

    // 플레이어 턴 시작 시 Block 초기화 (슬더식 임시 방어막)
    PlayerBlock = 0;

    if (Deck) Deck->DrawCards(CardsDrawnPerTurn);

    // UI 알림: 손패가 새로 채워졌고, 페이즈가 플레이어 턴이 됨
    OnHandChanged.Broadcast();
    OnTurnPhaseChanged.Broadcast(CurrentPhase);
    OnCostChanged.Broadcast(CurrentCost);
}

void ACombatManager::EndPlayerTurn()
{
    if (CurrentPhase != ETurnPhase::PlayerTurn) return;
    TickBuffs();
    if (Deck) Deck->DiscardHand();
    // 손패 비워졌음을 UI에 알림
    OnHandChanged.Broadcast();
    StartEnemyTurn();
}

void ACombatManager::StartEnemyTurn()
{
    CurrentPhase = ETurnPhase::EnemyTurn;
    OnTurnPhaseChanged.Broadcast(CurrentPhase);

    // 적 턴 시작 시 적 Block 초기화
    EnemyBlock = 0;

    TArray<APartyCharacter*> RawParty;
    for (auto& P : Party) RawParty.Add(P);

    for (AActor* EnemyActor : Enemies)
    {
        AEnemyBase* Enemy = Cast<AEnemyBase>(EnemyActor);
        if (!Enemy) continue;
        if (EnemyHP <= 0) break;

        Enemy->ExecuteIntent(this);
        CheckVictoryDefeat();
        if (CurrentPhase == ETurnPhase::Defeat) return;

        Enemy->GenerateIntent(RawParty);
    }

    CheckVictoryDefeat();
    if (CurrentPhase == ETurnPhase::PlayerTurn || CurrentPhase == ETurnPhase::EnemyTurn)
    {
        // ENEMY TURN 배너 애니가 끝날 시간을 확보한 뒤 PlayerTurn 호출
        // → PLAYER TURN 배너가 ENEMY TURN 배너와 겹치지 않도록 딜레이
        if (UWorld* World = GetWorld())
        {
            World->GetTimerManager().SetTimer(
                TurnTransitionTimerHandle,
                this,
                &ACombatManager::StartPlayerTurn,
                TurnTransitionDelay,
                false
            );
        }
        else
        {
            StartPlayerTurn(); // 월드 없으면 fallback (실제로는 발생 안 함)
        }
    }
}

bool ACombatManager::SpendCost(int32 Amount)
{
    if (CurrentCost < Amount) return false;
    CurrentCost -= Amount;
    OnCostChanged.Broadcast(CurrentCost);
    return true;
}

void ACombatManager::AddCost(int32 Amount)
{
    CurrentCost = FMath::Max(0, CurrentCost + Amount);
    OnCostChanged.Broadcast(CurrentCost);
}

bool ACombatManager::TryPlayCard(UCardBase* Card, AActor* Target)
{
    if (!Card || CurrentPhase != ETurnPhase::PlayerTurn) return false;

    FCombatContext Ctx;
    Ctx.CombatManager = this;
    Ctx.Target = Target;

    if (!Card->CanBePlayed(Ctx)) return false;

    const bool bNeedsTarget = (Card->GetTargetType() == ETargetType::SingleEnemy
                            || Card->GetTargetType() == ETargetType::SingleAlly);
    if (bNeedsTarget && !Target) return false;

    if (!SpendCost(Card->GetCost())) return false;

    for (APartyCharacter* Member : Party)
    {
        if (Member && Member->GetCharacterID() == Card->GetOwnerCharacterID())
        {
            Ctx.Caster = Member;
            break;
        }
    }

    // 모션 훅: 카드 사용 시점
    if (Ctx.Caster)
    {
        Ctx.Caster->OnPlayCardAnim(Card->GetCardType());
    }

    Card->Play(Ctx);

    if (Deck) Deck->DiscardCard(Card);
    // 손패에서 카드 제거됐으니 UI 갱신
    OnHandChanged.Broadcast();
    CheckVictoryDefeat();
    return true;
}

float ACombatManager::CalculateOutgoingDamage(APartyCharacter* /*Caster*/, float Base) const
{
    const float TurnBuff = 1.f + (PartyDamageBuffPercent / 100.f);
    return Base * TurnBuff;
}

void ACombatManager::DealDamageToEnemy(int32 Amount)
{
    if (Amount <= 0 || EnemyHP <= 0) return;

    int32 Remaining = Amount;
    if (EnemyBlock > 0)
    {
        const int32 Absorbed = FMath::Min(EnemyBlock, Remaining);
        EnemyBlock -= Absorbed;
        Remaining -= Absorbed;
    }
    if (Remaining > 0)
    {
        EnemyHP = FMath::Max(0, EnemyHP - Remaining);
        OnEnemyDamaged.Broadcast(Remaining);
    }

    NotifyAnyEnemyHitReact();
}

void ACombatManager::DealDamageToPlayer(int32 Amount)
{
    if (Amount <= 0 || PlayerHP <= 0) return;

    int32 Remaining = Amount;
    if (PlayerBlock > 0)
    {
        const int32 Absorbed = FMath::Min(PlayerBlock, Remaining);
        PlayerBlock -= Absorbed;
        Remaining -= Absorbed;
    }
    if (Remaining > 0)
    {
        PlayerHP = FMath::Max(0, PlayerHP - Remaining);
        OnPlayerDamaged.Broadcast(Remaining);
    }

    NotifyPartyHitReact();
}

void ACombatManager::AddBlockToPlayer(int32 Amount)
{
    if (Amount <= 0) return;
    PlayerBlock += Amount;
    OnCostChanged.Broadcast(CurrentCost);
}

void ACombatManager::AddBlockToEnemy(int32 Amount)
{
    if (Amount <= 0) return;
    EnemyBlock += Amount;
}

void ACombatManager::HealPlayer(int32 Amount)
{
    if (Amount <= 0 || PlayerHP <= 0) return;
    PlayerHP = FMath::Min(PlayerMaxHP, PlayerHP + Amount);
    // 회복 모션 훅 — 모든 파티 멤버에게 통지 (시각적으로 다 회복 느낌)
    for (APartyCharacter* Member : Party)
    {
        if (Member) Member->OnHealed();
    }
    OnHealed.Broadcast(Amount);
}

void ACombatManager::ApplyPartyDamageBuff(float Percent, int32 DurationTurns)
{
    PartyDamageBuffPercent = Percent;
    PartyDamageBuffTurnsLeft = DurationTurns;
    // 파티 전체 이펙트를 띄우라는 신호
    OnShowPartyBuffEffect();
}

void ACombatManager::TickBuffs()
{
    if (PartyDamageBuffTurnsLeft > 0)
    {
        PartyDamageBuffTurnsLeft--;
        if (PartyDamageBuffTurnsLeft == 0) PartyDamageBuffPercent = 0.f;
    }
}

void ACombatManager::NotifyPartyHitReact()
{
    for (APartyCharacter* Member : Party)
    {
        if (Member) Member->OnHitReact();
    }
}

void ACombatManager::NotifyAnyEnemyHitReact()
{
    for (AActor* EnemyActor : Enemies)
    {
        if (AEnemyBase* Enemy = Cast<AEnemyBase>(EnemyActor))
        {
            Enemy->OnHitReact();
        }
    }
}

void ACombatManager::CheckVictoryDefeat()
{
    if (CurrentPhase == ETurnPhase::Victory || CurrentPhase == ETurnPhase::Defeat) return;

    if (EnemyHP <= 0)
    {
        CurrentPhase = ETurnPhase::Victory;
        // 적 사망 모션 한 번씩
        for (AActor* EnemyActor : Enemies)
        {
            if (AEnemyBase* Enemy = Cast<AEnemyBase>(EnemyActor))
            {
                Enemy->OnDeath();
            }
        }
        OnTurnPhaseChanged.Broadcast(CurrentPhase);
        OnCombatEnded.Broadcast(true);
        return;
    }

    if (PlayerHP <= 0)
    {
        CurrentPhase = ETurnPhase::Defeat;
        for (APartyCharacter* Member : Party)
        {
            if (Member) Member->OnDeath();
        }
        OnTurnPhaseChanged.Broadcast(CurrentPhase);
        OnCombatEnded.Broadcast(false);
    }
}

// ✅ 이걸로 수정 (괄호 안을 비우기)
void ACombatManager::OnShowPartyBuffEffect_Implementation()
{
}