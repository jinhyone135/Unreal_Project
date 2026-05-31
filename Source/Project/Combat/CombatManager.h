#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cards/CardTypes.h"
#include "CombatManager.generated.h"

class APartyCharacter;
class UCardBase;
class UDeckComponent;
class URunState;
class UDataTable;

UENUM(BlueprintType)
enum class ETurnPhase : uint8
{
    PlayerTurn, EnemyTurn, Victory, Defeat
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatEnded, bool, bVictory);
// 손패가 바뀔 때마다 발화 (드로우/사용/턴종료 시) — UI 갱신용
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHandChanged);
// 턴 페이즈 변경 시 발화 — 버튼 활성/비활성 등 UI 상태용
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTurnPhaseChanged, ETurnPhase, NewPhase);
// 코스트 변동 시 발화 (턴시작/카드사용/환불 시) — 코스트 UI 갱신용
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCostChanged, int32, NewCost);
//힐 UI 연결
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealed, int32, Amount);
//밑 2개 데미지 UI 연결
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyDamaged, int32, Amount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDamaged, int32, Amount);
//코스트 부족하면 코스트가 부족하다고 알림
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotEnoughCost);

UCLASS()
class PROJECT_API ACombatManager : public AActor
{
    GENERATED_BODY()

public:
    ACombatManager();

    /** Run 상태로부터 전투 초기화. AddPartyMember/AddEnemy 호출 후 부르세요 */
    UFUNCTION(BlueprintCallable)
    void BootstrapFromRunState(URunState* RunState, UDataTable* CardTable);

    /** 테스트용 덱 초기화 — RunState 없이 카드ID 배열을 직접 받아 덱 구성 */
    UFUNCTION(BlueprintCallable)
    void BootstrapTestDeck(const TArray<FName>& TestCardIDs, UDataTable* CardTable);

    UPROPERTY(BlueprintAssignable) FOnCombatEnded OnCombatEnded;
    UPROPERTY(BlueprintAssignable) FOnHandChanged OnHandChanged;
    UPROPERTY(BlueprintAssignable) FOnTurnPhaseChanged OnTurnPhaseChanged;
    UPROPERTY(BlueprintAssignable) FOnCostChanged OnCostChanged;
    // 힐 UI 텍스트 연결
    UPROPERTY(BlueprintAssignable) FOnHealed OnHealed;
    // 데미지 UI 텍스트 연결
    UPROPERTY(BlueprintAssignable) FOnEnemyDamaged OnEnemyDamaged;
    UPROPERTY(BlueprintAssignable) FOnPlayerDamaged OnPlayerDamaged;

    // 파티/적 등록 — 등록된 액터는 시각/모션 표시용
    UFUNCTION(BlueprintCallable) void AddPartyMember(APartyCharacter* Member);
    UFUNCTION(BlueprintCallable) void AddEnemy(AActor* Enemy);
    UFUNCTION(BlueprintPure) UDeckComponent* GetDeck() const { return Deck; }

    // 턴/코스트
    UFUNCTION(BlueprintCallable) void StartCombat();
    UFUNCTION(BlueprintCallable) void EndPlayerTurn();

    UFUNCTION(BlueprintPure) int32 GetCurrentCost() const { return CurrentCost; }
    UFUNCTION(BlueprintPure) ETurnPhase GetPhase() const { return CurrentPhase; }
    UFUNCTION(BlueprintCallable) bool SpendCost(int32 Amount);
    UFUNCTION(BlueprintCallable) void AddCost(int32 Amount);

    // 카드 플레이
    UFUNCTION(BlueprintCallable) bool TryPlayCard(UCardBase* Card, AActor* Target);

    // ===== 단일 파티 HP / Block (1.docx 사양) =====
    UFUNCTION(BlueprintPure) int32 GetPlayerHP() const { return PlayerHP; }
    UFUNCTION(BlueprintPure) int32 GetPlayerMaxHP() const { return PlayerMaxHP; }
    UFUNCTION(BlueprintPure) int32 GetPlayerBlock() const { return PlayerBlock; }
    UFUNCTION(BlueprintPure) int32 GetEnemyHP() const { return EnemyHP; }
    UFUNCTION(BlueprintPure) int32 GetEnemyMaxHP() const { return EnemyMaxHP; }
    UFUNCTION(BlueprintPure) int32 GetEnemyBlock() const { return EnemyBlock; }

    // 데미지/방어/힐 — 효과들이 호출 (단일 값에 적용)
    UFUNCTION(BlueprintCallable) float CalculateOutgoingDamage(APartyCharacter* Caster, float Base) const;
    UFUNCTION(BlueprintCallable) void DealDamageToEnemy(int32 Amount);
    UFUNCTION(BlueprintCallable) void DealDamageToPlayer(int32 Amount);
    UFUNCTION(BlueprintCallable) void AddBlockToPlayer(int32 Amount);
    UFUNCTION(BlueprintCallable) void AddBlockToEnemy(int32 Amount);
    UFUNCTION(BlueprintCallable) void HealPlayer(int32 Amount);

    // 버프
    UFUNCTION(BlueprintCallable) void ApplyPartyDamageBuff(float Percent, int32 DurationTurns);

    // ✨ 여기 수정: BlueprintImplementableEvent -> BlueprintNativeEvent
    UFUNCTION(BlueprintNativeEvent, Category = "Combat")
    void OnShowPartyBuffEffect();

    // 적 턴 끝나고 플레이어 턴 시작까지 대기 시간 (초). ENEMY TURN 배너 애니메이션 길이에 맞추기
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat|Timing")
    float TurnTransitionDelay = 1.5f;

    //코스트 부족하면 코스트가 부족하다고 알림
    UPROPERTY(BlueprintAssignable) FOnNotEnoughCost OnNotEnoughCost;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat") int32 MaxCostPerTurn = 6;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat") int32 CardsDrawnPerTurn = 3;

    UPROPERTY(BlueprintReadOnly) int32 CurrentCost = 0;
    UPROPERTY(BlueprintReadOnly) ETurnPhase CurrentPhase = ETurnPhase::PlayerTurn;

    // 파티/적 — 시각/모션 훅 호출용 (HP/Block은 더 이상 보관 안 함)
    UPROPERTY(BlueprintReadOnly) TArray<TObjectPtr<APartyCharacter>> Party;
    UPROPERTY(BlueprintReadOnly) TArray<TObjectPtr<AActor>> Enemies;

    UPROPERTY() TObjectPtr<UDeckComponent> Deck;

    // ===== 단일 파티 HP / Block 필드 =====
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat") int32 PlayerMaxHP = 100;
    UPROPERTY(BlueprintReadOnly) int32 PlayerHP = 100;
    UPROPERTY(BlueprintReadOnly) int32 PlayerBlock = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat") int32 EnemyMaxHP = 50;
    UPROPERTY(BlueprintReadOnly) int32 EnemyHP = 50;
    UPROPERTY(BlueprintReadOnly) int32 EnemyBlock = 0;

    UPROPERTY(BlueprintReadOnly) float PartyDamageBuffPercent = 0.f;
    UPROPERTY(BlueprintReadOnly) int32 PartyDamageBuffTurnsLeft = 0;

    void StartPlayerTurn();
    void StartEnemyTurn();
    void CheckVictoryDefeat();
    void TickBuffs();
    void NotifyPartyHitReact();
    void NotifyAnyEnemyHitReact();

    // 턴 전환 딜레이용 타이머 핸들 — 배너 애니메이션 끝날 때까지 PlayerTurn 시작 지연
    FTimerHandle TurnTransitionTimerHandle;
};
