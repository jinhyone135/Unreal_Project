#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Map/MapTypes.h"
#include "MapGenerator.generated.h"

UCLASS()
class PROJECT_API UMapGenerator : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category="Map")
    static FRunMap GenerateMap(int32 NumFloors = 6, int32 NodesPerFloor = 3,
                               float ShopChance = 0.2f);

    UFUNCTION(BlueprintPure, Category="Map")
    static TArray<int32> GetAvailableNodes(const FRunMap& Map);
};
