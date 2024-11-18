// Dog Game. Copyright VeveryCold. All Rights Reserved.

#include "Framework/GG_GameMode.h"
#include "GG_GameMode.h"
#include "DogGame2/Core/Types.h"
#include "DogGame2/Core/Grid.h"
#include "World/GG_Grid.h"
#include "Framework/SG_Pawn.h"

void ASG_GameMode::StartPlay()
{
    Super::StartPlay();

    // init core game
    const Dog::Settings GS{GridDims.X, GridDims.Y};
    Game = MakeUnique<Dog::Game>(GS);
    check(Game.IsValid());

    // init world grid
    const FTransform GridOrigin = FTransform::Identity;
    check(GetWorld());
    GridVisual = GetWorld()->SpawnActorDeferred<ASG_Grid>(GridVisualClass, GridOrigin);
    check(GridVisual);
    GridVisual->SetModel(Game->grid(), CellSize);
    GridVisual->FinishSpawning(GridOrigin);

    // set pawn location fitting grid in viewport
    auto* PC = GetWorld()->GetFirstPlayerController();
    check(PC);

    auto* Pawn = Cast<ASG_Pawn>(PC->GetPawn());
    check(Pawn);
    check(Game->grid().IsValid());
    Pawn->UpdateLocation(Game->grid()->dim(), CellSize, GridOrigin);
}
