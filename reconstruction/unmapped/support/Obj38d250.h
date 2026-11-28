// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj38d250::Validate, treated as adapted: shaped like a condition parameter validation function in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00540000_o2.cpp:9769
// SPDX-License-Identifier: CC0-1.0
// Obj38d250, Target38d250, g_expectedCounts38d250: GUESS(low)
#pragma once

#include <cstdint>

struct Target38d250
{
    virtual void Slot00();
    virtual std::uint32_t GetType();
};

extern const std::uint32_t g_expectedCounts38d250[];

class Obj38d250
{
public:
    static bool Validate(std::int32_t index, std::uint8_t expectedType, void* unused, std::int32_t requiredIndex, std::uint8_t argCount, void** args, Target38d250* target);
};
