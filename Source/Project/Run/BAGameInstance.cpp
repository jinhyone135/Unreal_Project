#include "Run/BAGameInstance.h"
#include "Run/RunState.h"
#include "Run/MasterDeck.h"
#include "Characters/CharacterDataAsset.h"
#include "Combat/EncounterDataAsset.h"
#include "Map/MapGenerator.h"

void UBAGameInstance::StartNewRun(const TArray<FName>& SelectedCharacterIDs)
{
    CurrentRun = NewObject<URunState>(this);
    CurrentRun->Gold = StartingGold;
    CurrentRun->CurrentFloor = 0;
    CurrentRun->PartyMemberIDs = SelectedCharacterIDs;
    CurrentRun->PlayerMaxHP = PartyMaxHP;
    CurrentRun->PlayerHP = PartyMaxHP;

    // 1) 선택된 캐릭터의 시그니처 시작 카드(StartingCardIDs)를 마스터 덱에 추가
    //    — 호시노/시로코만 쓰는 현 단계에서는 보통 비어 있고, 향후 캐릭별 고정 카드용
    for (const FName& CharID : SelectedCharacterIDs)
    {
        const UCharacterDataAsset* Data = FindCharacterData(CharID);
        if (!Data) continue;
        for (const FName& CardID : Data->StartingCardIDs)
        {
            CurrentRun->MasterDeck->AddCard(CardID);
        }
    }

    // 2) 시작 카드 풀에서 StarterDrawCount만큼 중복 없이 랜덤 추출하여 마스터 덱에 추가
    if (StarterCardPool.Num() > 0 && StarterDrawCount > 0)
    {
        TArray<FName> Pool = StarterCardPool;
        for (int32 i = Pool.Num() - 1; i > 0; --i)
        {
            const int32 j = FMath::RandRange(0, i);
            Pool.Swap(i, j);
        }
        const int32 Take = FMath::Min(StarterDrawCount, Pool.Num());
        for (int32 i = 0; i < Take; ++i)
        {
            CurrentRun->MasterDeck->AddCard(Pool[i]);
        }
    }

    CurrentRun->MapData = UMapGenerator::GenerateMap(
        MapFloorCount, MapNodesPerFloor, MapShopChance);
}

void UBAGameInstance::EndCurrentRun() { CurrentRun = nullptr; }

UCharacterDataAsset* UBAGameInstance::FindCharacterData(FName CharacterID) const
{
    for (UCharacterDataAsset* Data : AllCharacters)
    {
        if (Data && Data->CharacterID == CharacterID) return Data;
    }
    return nullptr;
}

UEncounterDataAsset* UBAGameInstance::PickRandomEncounter(ENodeType NodeType) const
{
    const TArray<TObjectPtr<UEncounterDataAsset>>* Pool = nullptr;
    switch (NodeType)
    {
    case ENodeType::Boss:   Pool = &BossEncounters; break;
    case ENodeType::Combat: Pool = &CombatEncounters; break;
    default: return nullptr;
    }
    if (!Pool || Pool->Num() == 0) return nullptr;
    const int32 Idx = FMath::RandRange(0, Pool->Num() - 1);
    return (*Pool)[Idx];
}
