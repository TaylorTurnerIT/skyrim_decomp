// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj38d250::Validate, treated as adapted: shaped like a condition parameter validation function in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00540000_o2.cpp:9769
// SPDX-License-Identifier: CC0-1.0
// 0x38d250 Obj38d250::Validate
#include "Obj38d250.h"

// Validates entry point index, argument count, non-null argument pointers, and optional target type.
bool Obj38d250::Validate(std::int32_t index, std::uint8_t expectedType, void*, std::int32_t requiredIndex, std::uint8_t argCount, void** args, Target38d250* target)
{
    if (index != requiredIndex) {
        return false;
    }
    if (g_expectedCounts38d250[index] != argCount) {
        return false;
    }
    for (std::uint32_t i = 0; i < argCount; ++i) {
        if (args[i] == nullptr) {
            return false;
        }
    }
    if (target != nullptr && target->GetType() != expectedType) {
        return false;
    }
    return true;
}
