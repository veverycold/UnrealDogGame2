// Dog Game, Copyright VeveryCold. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace Dog
{

struct Dim
{
    uint32 width;
    uint32 height;
};

enum class CellType
{
    Empty = 0,
    Wall
    // Food
    // Snake
};

struct Settings
{
    Dim gridDims;
};
}  // namespace Dog