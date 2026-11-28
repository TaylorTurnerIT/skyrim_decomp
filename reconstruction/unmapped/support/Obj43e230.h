// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj43e230::SumOfSquares, treated as adapted: shaped like a matrix sum of squares in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00580000_o2.cpp:10263
// SPDX-License-Identifier: CC0-1.0
// Obj43e230, SumOfSquares, data, unk08, rows, cols: GUESS(low) STANDIN
#pragma once

#include <cstdint>

struct Obj43e230
{
    float SumOfSquares() const;  // compared: 0x43e230

    float* data;
    std::uint8_t unk08[0x10];
    std::uint32_t rows;
    std::uint32_t cols;
};
static_assert(sizeof(Obj43e230) == 0x20, "Obj43e230 size");
