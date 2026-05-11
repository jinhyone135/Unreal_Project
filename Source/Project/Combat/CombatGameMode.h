#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CombatGameMode.generated.h"

class ACombatManager;
class APartyCharacter;
class AEnemyBase;
class UEncounterDataAsset;
class UUserWidget;
class UDataTable;

UENUM(BlueprintType)
enum class ECombatBootstrapMode : uint8
{
    /** 레벨에 미리 배치된 PartyCharacter / EnemyBase 액터를 자동 수집 */
    UseExistingActors,
    /** "PartySpawn"/"EnemySpawn" 태그 위치에 동적 스폰 */
    SpawnFromData
};

UCLASS()
class PROJECT_API ACombatGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ACombatGameMode();

    virtual void BeginPlay() override;

    /** 기본은 UseExistingActors — 친구가 레벨에 박아둔 캐릭터를 그대로 쓰는 모드 */
    UPROPERTY(EditDefaultsOnly, Category="Bootstrap")
    ECombatBootstrapMode BootstrapMode = ECombatBootstrapMode::UseExistingActors;

    // 게임에서 소환할 매니저 클래스 (언리얼 에디터에서 BP_CombatManager를 선택)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    TSubclassOf<class ACombatManager> CombatManagerClass;

    UPROPERTY(EditDefaultsOnly, Category="Levels") FName MapLevelName = TEXT("MapLevel");
    UPROPERTY(EditDefaultsOnly, Category="Levels") FName TitleLevelName = TEXT("TitleLevel");

    UPROPERTY(EditDefaultsOnly, Category="Rewards") int32 BaseRewardGold = 25;
    UPROPERTY(EditDefaultsOnly, Category="Rewards") int32 RewardGoldPerFloor = 10;

    /** 전투 화면 위젯 클래스 — 디자이너에서 WBP_BattleUI 지정 */
    UPROPERTY(EditDefaultsOnly, Category="UI")
    TSubclassOf<UUserWidget> BattleUIClass;

    /** RunState 가 없을 때 테스트 덱으로 fallback 할지 여부 (단독 전투 테스트용) */
    UPROPERTY(EditDefaultsOnly, Category="Test")
    bool bUseTestDeckIfNoRun = true;

    /** 테스트 모드용 카드 ID 배열 — DT_Cards 의 Row 이름들 (예: Hoshino_01, Shiroko_01 ...) */
    UPROPERTY(EditDefaultsOnly, Category="Test", meta=(EditCondition="bUseTestDeckIfNoRun"))
    TArray<FName> TestCardIDs;

    /** 테스트 모드용 카드 데이터 테이블 — DT_Cards 직접 지정 */
    UPROPERTY(EditDefaultsOnly, Category="Test", meta=(EditCondition="bUseTestDeckIfNoRun"))
    TObjectPtr<UDataTable> TestCardTable;

    UPROPERTY(BlueprintReadOnly) TObjectPtr<ACombatManager> CombatManager;
    UPROPERTY(BlueprintReadOnly) TObjectPtr<UUserWidget> BattleUIInstance;

protected:
    void RegisterExistingParty();
    void RegisterExistingEnemies();
    void SpawnPartyFromData();
    void SpawnEnemiesFromData(UEncounterDataAsset* Encounter);

    /** WBP_BattleUI 위젯을 생성하고 BattleManagerRef 변수에 CombatManager 주입 후 뷰포트에 추가 */
    void CreateBattleUI();

    UFUNCTION()
    void HandleCombatEnded(bool bVictory);
};
