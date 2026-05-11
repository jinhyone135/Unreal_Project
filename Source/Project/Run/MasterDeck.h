#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MasterDeck.generated.h"

class UCardBase;
class UDataTable;

UCLASS(BlueprintType)
class PROJECT_API UMasterDeck : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable) void AddCard(FName CardID) { CardIDs.Add(CardID); }
    UFUNCTION(BlueprintCallable) bool RemoveCardAt(int32 Index);
    UFUNCTION(BlueprintCallable) bool UpgradeCardAt(int32 Index, UDataTable* CardTable);

    UFUNCTION(BlueprintPure) const TArray<FName>& GetCardIDs() const { return CardIDs; }
    UFUNCTION(BlueprintPure) int32 Num() const { return CardIDs.Num(); }

    UFUNCTION(BlueprintCallable)
    TArray<UCardBase*> MaterializeForCombat(UObject* Outer, UDataTable* CardTable) const;

protected:
    UPROPERTY(BlueprintReadOnly) TArray<FName> CardIDs;
};
