#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cards/CardTypes.h"
#include "CardEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, DefaultToInstanced)
class PROJECT_API UCardEffect : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void Execute(UPARAM(ref) FCombatContext& Context);
    virtual void Execute_Implementation(FCombatContext& Context) {}

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    bool RequiresTarget() const;
    virtual bool RequiresTarget_Implementation() const { return false; }
};
