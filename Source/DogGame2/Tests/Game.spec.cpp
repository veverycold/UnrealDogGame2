// Dog Game. Copyright VeveryCold. All Rights Reserved.

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"
#include "DogGame2/Core/Game.h"

DEFINE_SPEC(FDogGame, "Dog",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)

void FDogGame::Define()
{
    using namespace Dog;

    Describe("CoreGame", [this]() {  //
        It("GridShouldExists",
            [this]()
            {
                const Settings GS{10, 10};
                const auto CoreGame = Game(GS);
                TestTrueExpr(CoreGame.grid().IsValid());
            });
    });
}

#endif
