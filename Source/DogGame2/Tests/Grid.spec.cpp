// Dog Game. Copyright VeveryCold. All Rights Reserved.

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"
#include "DogGame2/Core/Grid.h"

DEFINE_SPEC(FDogGrid, "Dog",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)

void FDogGrid::Define()
{
    using namespace Dog;
    Describe("CoreGrid", [this]() {  //
        It("DimsMightIncludeWalls",
            [this]()
            {
                const Grid grid(Dim{12, 10});
                TestTrueExpr(grid.dim().width == 14);
                TestTrueExpr(grid.dim().height == 12);
            });
    });
}

#endif
