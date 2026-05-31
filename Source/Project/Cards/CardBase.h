#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cards/CardTypes.h"
#include "CardBase.generated.h"

class UCardEffect;
class APartyCharacter;

UCLASS(BlueprintType)
class PROJECT_API UCardBase : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable) void InitFromData(const FCardDataRow& InData);
    UFUNCTION(BlueprintCallable) void SetOwnerCharacter(APartyCharacter* InOwner);

    UFUNCTION(BlueprintCallable) bool CanBePlayed(const FCombatContext& Context) const;
    UFUNCTION(BlueprintCallable) void Play(UPARAM(ref) FCombatContext& Context);
    UFUNCTION(BlueprintCallable) bool TryUpgrade(class UDataTable* CardTable);

    UFUNCTION(BlueprintPure) int32 GetCost() const { return Data.Cost; }
    UFUNCTION(BlueprintPure) ECardType GetCardType() const { return Data.CardType; }
    UFUNCTION(BlueprintPure) ETargetType GetTargetType() const { return Data.TargetType; }
    UFUNCTION(BlueprintPure) FName GetCardID() const { return Data.CardID; }
    UFUNCTION(BlueprintPure) FName GetOwnerCharacterID() const { return Data.OwnerCharacterID; }
    UFUNCTION(BlueprintPure) const FCardDataRow& GetData() const { return Data; }

protected:
    UPROPERTY(BlueprintReadOnly) FCardDataRow Data;
    UPROPERTY() TArray<TObjectPtr<UCardEffect>> Effects;
    UPROPERTY() TWeakObjectPtr<APartyCharacter> OwnerCharacter;
};
