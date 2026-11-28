// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3eafe0, Obj3eafe0::slots, Obj3eafe0::counts: GUESS(low)
#pragma once

#include <cstdint>

class Obj3eafe0
{
public:
    Obj3eafe0();  // compared: 0x3eafe0

    std::int32_t slots[4][8];  // 0x00
    std::uint32_t counts[4];   // 0x80
    std::uint64_t unk90;       // 0x90
    std::uint64_t unk98;       // 0x98
    std::uint64_t unkA0;       // 0xA0
    std::uint64_t unkA8;       // 0xA8
    std::uint64_t unkB0;       // 0xB0
    std::uint64_t unkB8;       // 0xB8
    std::uint64_t unkC0;       // 0xC0
};
