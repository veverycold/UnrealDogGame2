// Dog Game. Copyright VeveryCold. All Rights Reserved.

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"
#include "DogGame2/Tests/Utils/TestUtils.h"
#include "DogGame2/World/GG_Grid.h"
#include "Kismet/GameplayStatics.h"

BEGIN_DEFINE_SPEC(FDogWorld, "Dog",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)
UWorld* World;
END_DEFINE_SPEC(FDogWorld)

void FDogWorld::Define()
{
    using namespace LifeExe::Test;

    Describe("WorldGid",
        [this]()
        {
            BeforeEach(
                [this]()
                {
                    AutomationOpenMap("GameLevel");
                    World = GetTestGameWorld();
                });
            It("OnlyOneValidGridActorShouldExists",
                [this]()
                {
                    TArray<AActor*> Grids;
                    UGameplayStatics::GetAllActorsOfClass(World, ASG_Grid::StaticClass(), Grids);
                    TestTrueExpr(Grids.Num() == 1);
                    TestNotNull("Grid actor exist", Grids[0]);
                });
        });
}

#endif