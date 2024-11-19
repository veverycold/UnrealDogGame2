// Dog Game. Copyright VeveryCold. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Core/Types.h"
#include "GG_Grid.generated.h"

namespace Dog
{
class Grid;
}

UCLASS()
class DOGGAME2_API ASG_Grid : public AActor
{
    GENERATED_BODY()

public:
    ASG_Grid();
    virtual void Tick(float DeltaTime) override;

    /**
     * Set core model to be observed by the grid world actor
     * @param Grid  model object
     * @param Cellsize  world size of the cell
     */
    void SetModel(const TSharedPtr<Dog::Grid>& Grid, uint32 CellSize);

protected:
    virtual void BeginPlay() override;

private:
    Dog::Dim GridDim;
    uint32 CellSize;
    uint32 WorldWidth;
    uint32 WorldHeight;

    void DrawGrid();
};
