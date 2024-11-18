// Dog Game, Copyright VeveryCold. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Types.h"

namespace Dog
{

class Grid
{
public:
    Grid(const Dim& dim);

    /**
     * Returns grid diemensions including walls (width +2; height +2)
     * @return Dim  grid diemensions
     */

    Dim dim() const { return c_dim; }

private:
    const Dim c_dim;
    TArray<CellType> m_cells;

    void initWalls();
    void ptintDebug();
    FORCEINLINE int32 posToIndex(int32 x, int32 y) const;
};

}  // namespace Dog