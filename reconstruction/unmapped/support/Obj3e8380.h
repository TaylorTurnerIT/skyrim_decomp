// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3e8380, Obj3e8380::Item, Obj3e8380::ItemArray, Obj3e8380::Slot, Obj3e8380::Function3e8380, Obj3e8380::slots: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e8380
{
public:
    struct Item
    {
        std::uint16_t id;  // 0x00
    };

    struct ItemArray
    {
        Item** data;             // 0x00
        std::uint32_t capacity;  // 0x08
        std::uint32_t unk0C;     // 0x0C
        std::uint32_t size;      // 0x10
    };

    struct Slot
    {
        std::uint8_t unk00[0x90];  // 0x00
        ItemArray* list90;         // 0x90
    };

    Item* Function3e8380(std::uint16_t key) const;  // compared: 0x3e8380

    std::uint8_t unk00[0x4A8];  // 0x000
    Slot* slots[2];             // 0x4A8
};
