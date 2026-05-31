#include "Cards/CardEffects.h"
#include "Combat/CombatManager.h"
#include "Characters/PartyCharacter.h"

void UDamageEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    const float FinalDamage = Context.CombatManager->CalculateOutgoingDamage(
        Context.Caster, Context.EffectiveValue);
    // 단일 적 파티 HP에 데미지 (적은 한 덩어리로 취급)
    Context.CombatManager->DealDamageToEnemy(FMath::RoundToInt(FinalDamage));
}

void UDefenseEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    const int32 BlockAmount = FMath::RoundToInt(Context.EffectiveValue);
    Context.CombatManager->AddBlockToPlayer(BlockAmount);
}

void UHealEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    const int32 HealAmount = FMath::RoundToInt(Context.EffectiveValue);
    Context.CombatManager->HealPlayer(HealAmount);
}

void UDamageBuffEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    Context.CombatManager->ApplyPartyDamageBuff(DamagePercent, DurationTurns);
}

void UCostRefundEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    Context.CombatManager->AddCost(RefundAmount);
}
