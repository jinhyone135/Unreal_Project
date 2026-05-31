#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MasterDeck.generated.h"

class UCardBase;
class UDataTable;

UCLASS(BlueprintType, Blueprintable)
class PROJECT_API UMasterDeck : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Deck Data")
    void AddCard(FName CardID) { CardIDs.Add(CardID); }

    UFUNCTION(BlueprintCallable, Category = "Deck Data")
    bool RemoveCardAt(int32 Index);

    UFUNCTION(BlueprintCallable, Category = "Deck Data")
    bool UpgradeCardAt(int32 Index, UDataTable* CardTable);

    UFUNCTION(BlueprintPure, Category = "Deck Data")
    const TArray<FName>& GetCardIDs() const { return CardIDs; }

    UFUNCTION(BlueprintPure, Category = "Deck Data")
    int32 Num() const { return CardIDs.Num(); }

    UFUNCTION(BlueprintCallable, Category = "Deck Data")
    TArray<UCardBase*> MaterializeForCombat(UObject* Outer, UDataTable* CardTable) const;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deck Data")
    TArray<FName> CardIDs;
};