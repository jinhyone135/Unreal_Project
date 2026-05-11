#include "Run/MasterDeck.h"
#include "Cards/CardBase.h"
#include "Engine/DataTable.h"

bool UMasterDeck::RemoveCardAt(int32 Index)
{
    if (!CardIDs.IsValidIndex(Index)) return false;
    CardIDs.RemoveAt(Index);
    return true;
}

bool UMasterDeck::UpgradeCardAt(int32 Index, UDataTable* CardTable)
{
    if (!CardTable || !CardIDs.IsValidIndex(Index)) return false;
    static const FString Ctx(TEXT("MasterDeckUpgrade"));
    const FCardDataRow* Row = CardTable->FindRow<FCardDataRow>(CardIDs[Index], Ctx);
    if (!Row || Row->UpgradedCardID.IsNone()) return false;
    CardIDs[Index] = Row->UpgradedCardID;
    return true;
}

TArray<UCardBase*> UMasterDeck::MaterializeForCombat(UObject* Outer, UDataTable* CardTable) const
{
    TArray<UCardBase*> Result;
    if (!Outer || !CardTable) return Result;

    static const FString Ctx(TEXT("MaterializeForCombat"));
    for (const FName& ID : CardIDs)
    {
        const FCardDataRow* Row = CardTable->FindRow<FCardDataRow>(ID, Ctx);
        if (!Row) continue;
        UCardBase* Card = NewObject<UCardBase>(Outer);
        Card->InitFromData(*Row);
        Result.Add(Card);
    }
    return Result;
}
