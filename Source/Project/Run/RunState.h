#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Map/MapTypes.h"
#include "RunState.generated.h"

class UMasterDeck;

UCLASS(BlueprintType, Blueprintable)
class PROJECT_API URunState : public UObject
{
    GENERATED_BODY()

public:
    URunState();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    TArray<FName> PartyMemberIDs;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Run State")
    TObjectPtr<UMasterDeck> MasterDeck;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 Gold = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 CurrentFloor = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 ShopVisitsUsed = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 CardRemovalsUsed = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    FRunMap MapData;

    // 단일 파티 HP — Run 진행 간 보존 (전투 → 맵 → 다음 전투)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 PlayerMaxHP = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 PlayerHP = 100;

    UFUNCTION(BlueprintCallable, Category = "Run State")
    void InitializeRun(int32 StartHP, int32 StartGold);

    UFUNCTION(BlueprintCallable, Category = "Run State")
    void AddGold(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Run State")
    bool SpendGold(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Run State")
    bool NavigateToNode(int32 NodeID);

    UFUNCTION(BlueprintPure, Category = "Run State")
    ENodeType GetCurrentNodeType() const;

    UFUNCTION(BlueprintPure, Category = "Run State")
    int32 GetCurrentFloorFromMap() const;
};