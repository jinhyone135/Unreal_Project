#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Map/MapTypes.h"
#include "RunState.generated.h"

class UMasterDeck;

UCLASS(BlueprintType)
class PROJECT_API URunState : public UObject
{
    GENERATED_BODY()

public:
    URunState();

    UPROPERTY(BlueprintReadWrite) TArray<FName> PartyMemberIDs;
    UPROPERTY(BlueprintReadOnly) TObjectPtr<UMasterDeck> MasterDeck;

    UPROPERTY(BlueprintReadWrite) int32 Gold = 0;
    UPROPERTY(BlueprintReadWrite) int32 CurrentFloor = 0;
    UPROPERTY(BlueprintReadWrite) int32 ShopVisitsUsed = 0;
    UPROPERTY(BlueprintReadWrite) int32 CardRemovalsUsed = 0;
    UPROPERTY(BlueprintReadWrite) FRunMap MapData;

    // 단일 파티 HP — Run 진행 간 보존 (전투 → 맵 → 다음 전투)
    UPROPERTY(BlueprintReadWrite) int32 PlayerMaxHP = 100;
    UPROPERTY(BlueprintReadWrite) int32 PlayerHP = 100;

    UFUNCTION(BlueprintCallable) void AddGold(int32 Amount);
    UFUNCTION(BlueprintCallable) bool SpendGold(int32 Amount);

    UFUNCTION(BlueprintCallable) bool NavigateToNode(int32 NodeID);
    UFUNCTION(BlueprintPure) ENodeType GetCurrentNodeType() const;
    UFUNCTION(BlueprintPure) int32 GetCurrentFloorFromMap() const;
};
