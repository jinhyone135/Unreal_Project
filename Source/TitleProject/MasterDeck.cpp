#include "MasterDeck.h"

void UMasterDeck::AddCardToDeck(FName NewCardID)
{
    CardIDs.Add(NewCardID);
}

void UMasterDeck::RemoveCardFromDeck(FName CardIDToRemove)
{
    CardIDs.RemoveSingle(CardIDToRemove); // 여러 장 중 한 장만 지울 때
}