// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj43e230::SumOfSquares, treated as adapted: shaped like a matrix sum of squares in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00580000_o2.cpp:10263
// SPDX-License-Identifier: CC0-1.0
// 0x43e230 Obj43e230::SumOfSquares
#include "Obj43e230.h"

#include <cstddef>

// Computes the sum of squared elements across all matrix rows and columns.
float Obj43e230::SumOfSquares() const
{
    float sum = 0.0f;
    for (std::uint32_t r = 0; r < rows; ++r) {
        for (std::uint32_t c = 0; c < cols; ++c) {
            float v = data[static_cast<std::size_t>(r) * cols + c];
            sum += v * v;
        }
    }
    return sum;
}
