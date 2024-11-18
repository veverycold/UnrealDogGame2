// Dog Game. Copyright VeveryCold. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Core/Types.h"
#include "SG_Pawn.generated.h"

class UCameraComponent;

UCLASS()
class DOGGAME2_API ASG_Pawn : public APawn
{
    GENERATED_BODY()

public:
    ASG_Pawn();

    /**
     * Updates pawn height fitting grid in viwport
     * @param Dim  grid dimensions
     * @param CellSize world size of the cell
     * @param GridOrigin  world transformation of the grid
     */
    void UpdateLocation(const Dog::Dim& Dim, int32 CellSize, const FTransform& GridOrigin);

protected:
    UPROPERTY(VisibleAnywhere)
    USceneComponent* Origin;

    UPROPERTY(VisibleAnywhere)
    UCameraComponent* Camera;

private:
    Dog::Dim Dim;
    int32 CellSize;
    FTransform GridOrigin;

    void OnViewportResized(FViewport* Viewport, uint32 Val);
};
