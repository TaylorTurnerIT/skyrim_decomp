// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3e6c80, Obj3e6c80::PtrArray, Obj3e6c80::Slot, Obj3e6c80::Function3e6c80, Obj3e6c80::slots: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e6c80
{
public:
    struct PtrArray
    {
        void** data;             // 0x00
        std::uint32_t capacity;  // 0x08
        std::uint32_t unk0C;     // 0x0C
        std::uint32_t size;      // 0x10
        std::uint32_t unk14;     // 0x14
    };

    struct Slot
    {
        std::uint8_t unk00[0xC0];  // 0x00
        PtrArray* listC0;          // 0xC0
    };

    bool Function3e6c80(std::int32_t index, void* target) const;  // compared: 0x3e6c80

    std::uint8_t unk00[0x4A8];  // 0x000
    Slot* slots[2];             // 0x4A8
};
