#pragma once

#include "CoreMinimal.h"
#include "MapTypes.generated.h"

UENUM(BlueprintType)
enum class ENodeType : uint8
{
    Combat, Shop, Boss, Unknown
};

USTRUCT(BlueprintType)
struct FMapNode
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly) int32 NodeID = -1;
    UPROPERTY(BlueprintReadOnly) int32 Floor = 0;
    UPROPERTY(BlueprintReadOnly) int32 Column = 0;
    UPROPERTY(BlueprintReadOnly) ENodeType Type = ENodeType::Combat;
    UPROPERTY(BlueprintReadOnly) TArray<int32> NextNodeIDs;
    UPROPERTY(BlueprintReadOnly) bool bVisited = false;
};

USTRUCT(BlueprintType)
struct FRunMap
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly) TArray<FMapNode> Nodes;
    UPROPERTY(BlueprintReadWrite) int32 CurrentNodeID = -1;
};
