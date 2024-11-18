// Dog Game, Copyright VeveryCold. All Rights Reserved.

#include "DogGame2/Core/Game.h"
#include "DogGame2/Core/Grid.h"

DEFINE_LOG_CATEGORY_STATIC(LogGame, All, All);

using namespace Dog;

Game::Game(const Settings& settings) : c_settings(settings)
{
    m_grid = MakeShared<Grid>(settings.gridDims);
}
