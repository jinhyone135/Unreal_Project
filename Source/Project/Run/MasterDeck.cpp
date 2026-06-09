#include "Run/MasterDeck.h"
#include "Cards/CardBase.h"
#include "Engine/DataTable.h"

void UMasterDeck::AddCard(FName CardID)
{
    CardIDs.Add(CardID);
    UpgradedFlags.Add(false);  // 새 카드는 항상 강화되지 않은 상태로 시작
}

bool UMasterDeck::RemoveCardAt(int32 Index)
{
    if (!CardIDs.IsValidIndex(Index)) return false;
    CardIDs.RemoveAt(Index);
    // UpgradedFlags 도 같은 인덱스 제거 — 동기화 유지
    if (UpgradedFlags.IsValidIndex(Index))
    {
        UpgradedFlags.RemoveAt(Index);
    }
    return true;
}

bool UMasterDeck::UpgradeCardAt(int32 Index)
{
    if (!CardIDs.IsValidIndex(Index)) return false;
    if (!UpgradedFlags.IsValidIndex(Index)) return false;

    // 이미 강화된 카드는 추가 강화 불가 (카드당 1회 제한)
    if (UpgradedFlags[Index]) return false;

    UpgradedFlags[Index] = true;
    return true;
}

bool UMasterDeck::IsUpgraded(int32 Index) const
{
    if (!UpgradedFlags.IsValidIndex(Index)) return false;
    return UpgradedFlags[Index];
}

TArray<UCardBase*> UMasterDeck::MaterializeForCombat(UObject* Outer, UDataTable* CardTable) const
{
    TArray<UCardBase*> Result;
    if (!Outer || !CardTable) return Result;

    static const FString Ctx(TEXT("MaterializeForCombat"));
    const int32 Count = CardIDs.Num();

    for (int32 i = 0; i < Count; ++i)
    {
        const FName& ID = CardIDs[i];
        const FCardDataRow* Row = CardTable->FindRow<FCardDataRow>(ID, Ctx);
        if (!Row) continue;

        UCardBase* Card = NewObject<UCardBase>(Outer);
        Card->InitFromData(*Row);

        // 강화 카드면 인스턴스 값을 1.5배로 고정 — 전투 중 Play() 시 곱셈 없이 고정값 사용
        const bool bUpgraded = UpgradedFlags.IsValidIndex(i) && UpgradedFlags[i];
        if (bUpgraded)
        {
            Card->ApplyUpgrade();
        }

        Result.Add(Card);
    }
    return Result;
}
