#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatTarget.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UCombatTarget : public UInterface
{
    GENERATED_BODY()
};

class PROJECT_API ICombatTarget
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Combat")
    void ReceiveDamage(int32 Amount);
    virtual void ReceiveDamage_Implementation(int32 Amount) {}

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Combat")
    bool IsValidTarget() const;
    virtual bool IsValidTarget_Implementation() const { return false; }
};
