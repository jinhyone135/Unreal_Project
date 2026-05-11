#pragma once

#include "CoreMinimal.h"
#include "Cards/CardEffect.h"
#include "CardEffects.generated.h"

UCLASS(DisplayName="Effect: Damage")
class PROJECT_API UDamageEffect : public UCardEffect
{
    GENERATED_BODY()
public:
    virtual void Execute_Implementation(FCombatContext& Context) override;
    // 단일 적 파티 HP에 적용 — 타겟 불필요
    virtual bool RequiresTarget_Implementation() const override { return false; }
};

UCLASS(DisplayName="Effect: Defense")
class PROJECT_API UDefenseEffect : public UCardEffect
{
    GENERATED_BODY()
public:
    virtual void Execute_Implementation(FCombatContext& Context) override;
};

UCLASS(DisplayName="Effect: Heal")
class PROJECT_API UHealEffect : public UCardEffect
{
    GENERATED_BODY()
public:
    virtual void Execute_Implementation(FCombatContext& Context) override;
};

UCLASS(DisplayName="Effect: Damage Buff")
class PROJECT_API UDamageBuffEffect : public UCardEffect
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamagePercent = 50.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurationTurns = 1;
    virtual void Execute_Implementation(FCombatContext& Context) override;
};

UCLASS(DisplayName="Effect: Cost Refund")
class PROJECT_API UCostRefundEffect : public UCardEffect
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RefundAmount = 2;
    virtual void Execute_Implementation(FCombatContext& Context) override;
};
