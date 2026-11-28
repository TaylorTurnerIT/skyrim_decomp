// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3b1f10, Obj3b1f10::Function3b1f10, Obj3b1f10::count, Obj3b1f10::values: GUESS(low)
#pragma once

#include <cstdint>

extern "C" __declspec(dllimport) int __cdecl _isnan(double value);

class Obj3b1f10
{
public:
    float Function3b1f10(std::int32_t index) const;  // compared: 0x3b1f10

    std::uint8_t unk00[0x1C];  // 0x00
    std::uint32_t count;       // 0x1C
    float* values;             // 0x20
};
