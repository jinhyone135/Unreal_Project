#include "Combat/CombatGameMode.h"
#include "Combat/CombatManager.h"
#include "Combat/EnemyBase.h"
#include "Combat/EncounterDataAsset.h"
#include "Characters/PartyCharacter.h"
#include "Characters/CharacterDataAsset.h"
#include "Run/BAGameInstance.h"
#include "Run/RunState.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"
#include "UObject/UnrealType.h"

ACombatGameMode::ACombatGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ACombatGameMode::BeginPlay()
{
    Super::BeginPlay();

    UBAGameInstance* GI = GetGameInstance<UBAGameInstance>();

    // GI나 Run이 없어도 일단 전투는 진행 (테스트용 단독 실행 지원)
    // 선택된 클래스가 있으면 그걸 소환하고, 없으면 예전처럼 깡통이라도 소환
    UClass* ClassToSpawn = CombatManagerClass ? CombatManagerClass.Get() : ACombatManager::StaticClass();
    CombatManager = GetWorld()->SpawnActor<ACombatManager>(ClassToSpawn);
    if (!CombatManager) return;

    if (BootstrapMode == ECombatBootstrapMode::UseExistingActors)
    {
        // 친구가 레벨에 박아둔 캐릭터들 자동 수집
        RegisterExistingParty();
        RegisterExistingEnemies();
    }
    else
    {
        // 데이터 기반 스폰 (Run 진행 중 필요)
        if (GI && GI->CurrentRun)
        {
            SpawnPartyFromData();
            UEncounterDataAsset* Enc = GI->PickRandomEncounter(GI->CurrentRun->GetCurrentNodeType());
            SpawnEnemiesFromData(Enc);
        }
    }

    // Run 있으면 마스터덱으로 부트스트랩, 없으면 테스트 덱 또는 빈 덱
    if (GI && GI->CurrentRun)
    {
        CombatManager->BootstrapFromRunState(GI->CurrentRun, GI->GetCardDataTable());
    }
    else if (bUseTestDeckIfNoRun && TestCardTable && TestCardIDs.Num() > 0)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[CombatGameMode] No active run — using TestDeck (%d cards)"), TestCardIDs.Num());
        CombatManager->BootstrapTestDeck(TestCardIDs, TestCardTable);
    }
    else
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[CombatGameMode] No active run and no test deck configured — empty deck."));
    }

    CombatManager->OnCombatEnded.AddDynamic(this, &ACombatGameMode::HandleCombatEnded);

    // 위젯 생성 + BattleManagerRef 주입 — StartCombat 이전에 해야 UI가 초기 이벤트 받음
    CreateBattleUI();

    CombatManager->StartCombat();
}

void ACombatGameMode::CreateBattleUI()
{
    if (!BattleUIClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("[CombatGameMode] BattleUIClass 미지정 — UI 생성 스킵"));
        return;
    }
    if (!CombatManager) return;

    BattleUIInstance = CreateWidget<UUserWidget>(GetWorld(), BattleUIClass);
    if (!BattleUIInstance) return;

    // BP 변수 BattleManagerRef 에 CombatManager 주입 — reflection 으로 직접 set
    if (FObjectProperty* Prop = FindFProperty<FObjectProperty>(BattleUIInstance->GetClass(), TEXT("BattleManagerRef")))
    {
        Prop->SetObjectPropertyValue_InContainer(BattleUIInstance, CombatManager);
    }
    else
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[CombatGameMode] WBP_BattleUI 에 BattleManagerRef 변수가 없음 — 변수명 확인 필요"));
    }

    // BattleManagerRef 주입은 AddToViewport 이전에 끝남
    // → AddToViewport 가 NativeConstruct/Event Construct 를 발화시키므로
    //   Event Construct 안에서 BattleManagerRef 가 이미 valid 한 상태로 동작함
    BattleUIInstance->AddToViewport();

    // Input Mode 설정 — 마우스 클릭이 UMG 위젯으로 전달되도록
    // Game Only 모드면 카드 버튼이 클릭을 못 받음 (게임/Pawn 이 가로챔)
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        PC->bShowMouseCursor = true;
        FInputModeGameAndUI InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        InputMode.SetHideCursorDuringCapture(false);
        PC->SetInputMode(InputMode);
    }
}

void ACombatGameMode::RegisterExistingParty()
{
    UBAGameInstance* GI = GetGameInstance<UBAGameInstance>();

    for (TActorIterator<APartyCharacter> It(GetWorld()); It; ++It)
    {
        APartyCharacter* P = *It;
        if (!P) continue;

        // GI/Run이 있으면 DataAsset으로 스탯 초기화
        if (GI)
        {
            if (UCharacterDataAsset* Data = GI->FindCharacterData(P->GetCharacterID()))
            {
                P->InitFromData(Data);
            }
        }

        CombatManager->AddPartyMember(P);
    }
}

void ACombatGameMode::RegisterExistingEnemies()
{
    for (TActorIterator<AEnemyBase> It(GetWorld()); It; ++It)
    {
        AEnemyBase* E = *It;
        if (E) CombatManager->AddEnemy(E);
    }
}

void ACombatGameMode::SpawnPartyFromData()
{
    UBAGameInstance* GI = GetGameInstance<UBAGameInstance>();
    if (!GI || !GI->CurrentRun) return;

    TArray<AActor*> SpawnPoints;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("PartySpawn"), SpawnPoints);

    int32 Idx = 0;
    for (const FName& MemberID : GI->CurrentRun->PartyMemberIDs)
    {
        UCharacterDataAsset* Data = GI->FindCharacterData(MemberID);
        if (!Data) continue;

        TSubclassOf<APartyCharacter> ActorClass = APartyCharacter::StaticClass();
        if (!Data->CharacterActorClass.IsNull())
        {
            if (UClass* Loaded = Data->CharacterActorClass.LoadSynchronous())
            {
                ActorClass = Loaded;
            }
        }

        const FTransform Xform = SpawnPoints.IsValidIndex(Idx)
            ? SpawnPoints[Idx]->GetActorTransform()
            : FTransform::Identity;

        APartyCharacter* Member = GetWorld()->SpawnActor<APartyCharacter>(ActorClass, Xform);
        if (!Member) continue;
        Member->InitFromData(Data);
        CombatManager->AddPartyMember(Member);
        Idx++;
    }
}

void ACombatGameMode::SpawnEnemiesFromData(UEncounterDataAsset* Encounter)
{
    if (!Encounter) return;

    TArray<AActor*> SpawnPoints;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("EnemySpawn"), SpawnPoints);

    int32 Idx = 0;
    for (const TSoftClassPtr<AEnemyBase>& SoftClass : Encounter->EnemyClasses)
    {
        UClass* EnemyClass = SoftClass.LoadSynchronous();
        if (!EnemyClass) continue;

        const FTransform Xform = SpawnPoints.IsValidIndex(Idx)
            ? SpawnPoints[Idx]->GetActorTransform()
            : FTransform::Identity;

        AEnemyBase* Enemy = GetWorld()->SpawnActor<AEnemyBase>(EnemyClass, Xform);
        if (Enemy) CombatManager->AddEnemy(Enemy);
        Idx++;
    }
}

void ACombatGameMode::HandleCombatEnded(bool bVictory)
{
    UBAGameInstance* GI = GetGameInstance<UBAGameInstance>();
    if (!GI || !GI->CurrentRun)
    {
        // Run 없는 단독 테스트면 그냥 로그만 찍고 종료
        UE_LOG(LogTemp, Warning, TEXT("[CombatGameMode] Combat ended: %s (no run, no level transition)"),
            bVictory ? TEXT("Victory") : TEXT("Defeat"));
        return;
    }

    // 전투에서 줄어든 파티 HP를 RunState에 저장 (다음 전투에 이어짐)
    if (CombatManager)
    {
        GI->CurrentRun->PlayerHP = CombatManager->GetPlayerHP();
        GI->CurrentRun->PlayerMaxHP = CombatManager->GetPlayerMaxHP();
    }

    if (bVictory)
    {
        const int32 Floor = GI->CurrentRun->GetCurrentFloorFromMap();
        const int32 Reward = BaseRewardGold + (Floor * RewardGoldPerFloor);
        GI->CurrentRun->AddGold(Reward);

        if (GI->CurrentRun->GetCurrentNodeType() == ENodeType::Boss)
        {
            GI->EndCurrentRun();
            UGameplayStatics::OpenLevel(this, TitleLevelName);
        }
        else
        {
            UGameplayStatics::OpenLevel(this, MapLevelName);
        }
    }
    else
    {
        GI->EndCurrentRun();
        UGameplayStatics::OpenLevel(this, TitleLevelName);
    }
}
