#include "Map/MapGenerator.h"

FRunMap UMapGenerator::GenerateMap(int32 NumFloors, int32 NodesPerFloor, float ShopChance)
{
    FRunMap Map;
    if (NumFloors < 2 || NodesPerFloor < 1) return Map;

    int32 NextID = 0;
    TArray<TArray<int32>> NodesByFloor;
    NodesByFloor.Reserve(NumFloors);

    for (int32 Floor = 0; Floor < NumFloors; ++Floor)
    {
        TArray<int32> FloorNodes;
        const bool bIsLast = (Floor == NumFloors - 1);
        const int32 Count = bIsLast ? 1 : NodesPerFloor;

        for (int32 Col = 0; Col < Count; ++Col)
        {
            FMapNode Node;
            Node.NodeID = NextID++;
            Node.Floor = Floor;
            Node.Column = Col;

            if (bIsLast) Node.Type = ENodeType::Boss;
            else if (Floor == 0) Node.Type = ENodeType::Combat;
            else Node.Type = (FMath::FRand() < ShopChance) ? ENodeType::Shop : ENodeType::Combat;

            Map.Nodes.Add(Node);
            FloorNodes.Add(Node.NodeID);
        }
        NodesByFloor.Add(FloorNodes);
    }

    for (int32 Floor = 0; Floor < NumFloors - 1; ++Floor)
    {
        const TArray<int32>& Current = NodesByFloor[Floor];
        const TArray<int32>& Next = NodesByFloor[Floor + 1];

        for (int32 NodeID : Current)
        {
            FMapNode& Node = Map.Nodes[NodeID];

            if (Next.Num() == 1)
            {
                Node.NextNodeIDs.Add(Next[0]);
                continue;
            }

            TArray<int32> Candidates;
            for (int32 NID : Next)
            {
                if (FMath::Abs(Map.Nodes[NID].Column - Node.Column) <= 1)
                {
                    Candidates.Add(NID);
                }
            }
            for (int32 i = Candidates.Num() - 1; i > 0; --i)
            {
                const int32 j = FMath::RandRange(0, i);
                Candidates.Swap(i, j);
            }
            const int32 NumConn = FMath::Min(Candidates.Num(), FMath::RandRange(1, 2));
            for (int32 i = 0; i < NumConn; ++i)
            {
                Node.NextNodeIDs.Add(Candidates[i]);
            }
        }
    }

    TSet<int32> HasIncoming;
    for (const FMapNode& N : Map.Nodes)
    {
        for (int32 Out : N.NextNodeIDs) HasIncoming.Add(Out);
    }
    for (int32 Floor = 1; Floor < NumFloors; ++Floor)
    {
        for (int32 NodeID : NodesByFloor[Floor])
        {
            if (HasIncoming.Contains(NodeID)) continue;
            const FMapNode& Orphan = Map.Nodes[NodeID];
            int32 BestPrev = INDEX_NONE;
            int32 BestDist = TNumericLimits<int32>::Max();
            for (int32 PrevID : NodesByFloor[Floor - 1])
            {
                const int32 Dist = FMath::Abs(Map.Nodes[PrevID].Column - Orphan.Column);
                if (Dist < BestDist) { BestDist = Dist; BestPrev = PrevID; }
            }
            if (BestPrev != INDEX_NONE)
            {
                Map.Nodes[BestPrev].NextNodeIDs.AddUnique(NodeID);
            }
        }
    }

    Map.CurrentNodeID = -1;
    return Map;
}

TArray<int32> UMapGenerator::GetAvailableNodes(const FRunMap& Map)
{
    TArray<int32> Result;
    if (Map.CurrentNodeID == -1)
    {
        for (const FMapNode& N : Map.Nodes)
        {
            if (N.Floor == 0) Result.Add(N.NodeID);
        }
        return Result;
    }
    if (Map.Nodes.IsValidIndex(Map.CurrentNodeID))
    {
        Result = Map.Nodes[Map.CurrentNodeID].NextNodeIDs;
    }
    return Result;
}
