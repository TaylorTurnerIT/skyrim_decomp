// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3fcbb0, Obj3fcbb0::Slot, Obj3fcbb0::Function3fcbb0, Obj3fcbb0::slots, Obj3fcbb0::data: GUESS(low)
#pragma once

#include <cstdint>

class Obj3fcbb0
{
public:
    struct Slot
    {
        std::uint8_t unk00[0x139];  // 0x000
        std::uint8_t count;         // 0x139
    };

    std::uint32_t* Function3fcbb0(std::int32_t index) const;  // compared: 0x3fcbb0

    std::uint64_t unk00;  // 0x00
    Slot* slots[9];       // 0x08
    std::uint32_t* data;  // 0x50
};
