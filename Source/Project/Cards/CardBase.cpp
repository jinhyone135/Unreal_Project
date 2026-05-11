#include "Cards/CardBase.h"
#include "Cards/CardEffect.h"
#include "Characters/PartyCharacter.h"
#include "Engine/DataTable.h"

void UCardBase::InitFromData(const FCardDataRow& InData)
{
    Data = InData;
    Effects.Reset();
    for (TSubclassOf<UCardEffect> EffectClass : Data.EffectClasses)
    {
        if (!EffectClass) continue;
        UCardEffect* NewEffect = NewObject<UCardEffect>(this, EffectClass);
        if (NewEffect) Effects.Add(NewEffect);
    }
}

void UCardBase::SetOwnerCharacter(APartyCharacter* InOwner)
{
    OwnerCharacter = TWeakObjectPtr<APartyCharacter>(InOwner);
}

bool UCardBase::CanBePlayed(const FCombatContext& /*Context*/) const
{
    // 단일 파티 HP 시스템 — 파티 HP 검사는 CombatManager가 담당
    return Data.Cost >= 0;
}

void UCardBase::Play(FCombatContext& Context)
{
    Context.EffectiveValue = Data.BaseValue;
    for (UCardEffect* Effect : Effects)
    {
        if (Effect) Effect->Execute(Context);
    }
}

bool UCardBase::TryUpgrade(UDataTable* CardTable)
{
    if (!CardTable || Data.UpgradedCardID.IsNone()) return false;
    static const FString Ctx(TEXT("CardUpgrade"));
    const FCardDataRow* UpgradedRow = CardTable->FindRow<FCardDataRow>(Data.UpgradedCardID, Ctx);
    if (!UpgradedRow) return false;
    InitFromData(*UpgradedRow);
    return true;
}
