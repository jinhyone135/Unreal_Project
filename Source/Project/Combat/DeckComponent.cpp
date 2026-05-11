#include "Combat/DeckComponent.h"
#include "Cards/CardBase.h"

UDeckComponent::UDeckComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UDeckComponent::InitializePiles(const TArray<UCardBase*>& StartingCards)
{
    DrawPile.Reset();
    Hand.Reset();
    DiscardPile.Reset();

    for (UCardBase* Card : StartingCards)
    {
        if (Card) DrawPile.Add(Card);
    }
    ShuffleDrawPile();
}

void UDeckComponent::ShuffleDrawPile()
{
    const int32 Num = DrawPile.Num();
    for (int32 i = Num - 1; i > 0; --i)
    {
        const int32 j = FMath::RandRange(0, i);
        DrawPile.Swap(i, j);
    }
}

void UDeckComponent::DrawCards(int32 Count)
{
    for (int32 i = 0; i < Count; ++i)
    {
        if (DrawPile.Num() == 0)
        {
            if (DiscardPile.Num() == 0) return;
            ReshuffleDiscardIntoDraw();
        }
        UCardBase* Top = DrawPile.Pop();
        if (Top) Hand.Add(Top);
    }
}

void UDeckComponent::DiscardCard(UCardBase* Card)
{
    if (!Card) return;
    Hand.Remove(Card);
    DiscardPile.Add(Card);
}

void UDeckComponent::DiscardHand()
{
    for (UCardBase* Card : Hand)
    {
        if (Card) DiscardPile.Add(Card);
    }
    Hand.Reset();
}

void UDeckComponent::ReshuffleDiscardIntoDraw()
{
    DrawPile.Append(DiscardPile);
    DiscardPile.Reset();
    ShuffleDrawPile();
}

TArray<UCardBase*> UDeckComponent::GetHand() const
{
    TArray<UCardBase*> Result;
    Result.Reserve(Hand.Num());
    for (const TObjectPtr<UCardBase>& C : Hand)
    {
        Result.Add(C.Get());
    }
    return Result;
}

TArray<UCardBase*> UDeckComponent::GetDrawPile() const
{
    TArray<UCardBase*> Result;
    Result.Reserve(DrawPile.Num());
    for (const TObjectPtr<UCardBase>& C : DrawPile)
    {
        Result.Add(C.Get());
    }
    return Result;
}

TArray<UCardBase*> UDeckComponent::GetDiscardPile() const
{
    TArray<UCardBase*> Result;
    Result.Reserve(DiscardPile.Num());
    for (const TObjectPtr<UCardBase>& C : DiscardPile)
    {
        Result.Add(C.Get());
    }
    return Result;
}
