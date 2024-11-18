// Dog Game. Copyright VeveryCold. All Rights Reserved.

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"
#include "DogGame2/Tests/Utils/TestUtils.h"
#include "DogGame2/Framework/GG_GameMode.h"
#include "DogGame2/Framework/SG_Pawn.h"

BEGIN_DEFINE_SPEC(FDogFramework, "Dog",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)
UWorld* World;
END_DEFINE_SPEC(FDogFramework)

void FDogFramework::Define()
{
    using namespace LifeExe::Test;

    Describe("Framework",
        [this]()
        {
            BeforeEach(
                [this]()
                {
                    AutomationOpenMap("GameLevel");
                    World = GetTestGameWorld();
                });
            It("GameMapMidthExist", [this]() { TestNotNull("World Exists", World); });
            It("ClassesMightBeSetupCorrectly",
                [this]()
                {
                    TestNotNull("Dog game mode set up", Cast<ASG_GameMode>(World->GetAuthGameMode()));
                    TestNotNull("Dog pawn set up", Cast<ASG_Pawn>(World->GetFirstPlayerController()->GetPawn()));
                });
            xIt("PawnLocationShouldBeAdjustCorrectly", [this]() { unimplemented(); });
        });
}

#endif