#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Map/MapTypes.h"
#include "BAGameInstance.generated.h"

class URunState;
class UDataTable;
class UCharacterDataAsset;
class UEncounterDataAsset;

UCLASS()
class PROJECT_API UBAGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data")
    TObjectPtr<UDataTable> CardDataTable;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data")
    TArray<TObjectPtr<UCharacterDataAsset>> AllCharacters;

    /** Run 시작 시 마스터 덱에 랜덤 추가될 카드 풀 (예: Hoshino/Shiroko/Ayame/Serika/Nonomi) */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data")
    TArray<FName> StarterCardPool;

    /** 풀에서 랜덤으로 뽑아 시작 덱에 넣을 카드 수 */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data", meta=(ClampMin=1))
    int32 StarterDrawCount = 3;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Encounters")
    TArray<TObjectPtr<UEncounterDataAsset>> CombatEncounters;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Encounters")
    TArray<TObjectPtr<UEncounterDataAsset>> BossEncounters;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Run")
    int32 StartingGold = 0;

    /** 새 Run의 플레이어 파티 시작 최대 HP (단일 파티 HP) */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Run", meta=(ClampMin=1))
    int32 PartyMaxHP = 100;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Map") int32 MapFloorCount = 6;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Map") int32 MapNodesPerFloor = 3;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Map") float MapShopChance = 0.2f;

    UPROPERTY(BlueprintReadOnly) TObjectPtr<URunState> CurrentRun;

    UFUNCTION(BlueprintCallable)
    void StartNewRun(const TArray<FName>& SelectedCharacterIDs);

    UFUNCTION(BlueprintCallable) void EndCurrentRun();

    UFUNCTION(BlueprintPure) UCharacterDataAsset* FindCharacterData(FName CharacterID) const;
    UFUNCTION(BlueprintPure) UEncounterDataAsset* PickRandomEncounter(ENodeType NodeType) const;
    UFUNCTION(BlueprintPure) UDataTable* GetCardDataTable() const { return CardDataTable; }
    UFUNCTION(BlueprintPure) bool HasActiveRun() const { return CurrentRun != nullptr; }
};
