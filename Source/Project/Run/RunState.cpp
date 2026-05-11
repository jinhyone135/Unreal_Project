#include "Run/RunState.h"
#include "Run/MasterDeck.h"
#include "Map/MapGenerator.h"

URunState::URunState()
{
    MasterDeck = CreateDefaultSubobject<UMasterDeck>(TEXT("MasterDeck"));
}

void URunState::AddGold(int32 Amount) { if (Amount > 0) Gold += Amount; }

bool URunState::SpendGold(int32 Amount)
{
    if (Amount <= 0 || Gold < Amount) return false;
    Gold -= Amount; return true;
}

bool URunState::NavigateToNode(int32 NodeID)
{
    const TArray<int32> Available = UMapGenerator::GetAvailableNodes(MapData);
    if (!Available.Contains(NodeID)) return false;
    if (!MapData.Nodes.IsValidIndex(NodeID)) return false;
    MapData.CurrentNodeID = NodeID;
    MapData.Nodes[NodeID].bVisited = true;
    CurrentFloor = MapData.Nodes[NodeID].Floor;
    return true;
}

ENodeType URunState::GetCurrentNodeType() const
{
    if (!MapData.Nodes.IsValidIndex(MapData.CurrentNodeID)) return ENodeType::Unknown;
    return MapData.Nodes[MapData.CurrentNodeID].Type;
}

int32 URunState::GetCurrentFloorFromMap() const
{
    if (!MapData.Nodes.IsValidIndex(MapData.CurrentNodeID)) return 0;
    return MapData.Nodes[MapData.CurrentNodeID].Floor;
}
