// Dog Game. Copyright VeveryCold. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DogGame2/Core/Game.h"
#include "GG_GameMode.generated.h"

/**
 *
 */
class ASG_Grid;

UCLASS()
class DOGGAME2_API ASG_GameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void StartPlay() override;

protected:
    UPROPERTY(EditDefaultsOnly, meta = (ClampMin = "10", ClampMax = "100"))
    FUintPoint GridDims{10, 10};

    UPROPERTY(EditDefaultsOnly, meta = (ClampMin = "10", ClampMax = "100"))
    int32 CellSize{10};

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASG_Grid> GridVisualClass;

private:
    TUniquePtr<Dog::Game> Game;

    UPROPERTY()
    ASG_Grid* GridVisual;
};
