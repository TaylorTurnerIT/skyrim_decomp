// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3cc660, Obj3cc660::Function3cc660, Obj3cc660::current18, Obj3cc660::keys20, Obj3cc660::size30, Obj3cc660::values38: GUESS(low)
#pragma once

#include <cstdint>

class Obj3cc660
{
public:
    float Function3cc660() const;  // compared: 0x3cc660

    std::uint8_t unk00[0x18];  // 0x00
    void* current18;           // 0x18
    void** keys20;             // 0x20
    std::uint64_t unk28;       // 0x28
    std::uint32_t size30;      // 0x30
    std::uint32_t unk34;       // 0x34
    float* values38;           // 0x38
};
