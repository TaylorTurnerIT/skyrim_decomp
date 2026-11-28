// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3e2ff0, Obj3e2ff0::Item, Obj3e2ff0::ItemArray, Obj3e2ff0::ValueArray, Obj3e2ff0::Function3e2ff0, Obj3e2ff0::items, Obj3e2ff0::values: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e2ff0
{
public:
    struct Item
    {
        std::uint8_t unk00[0x30];  // 0x00
        std::uint32_t key30;       // 0x30
    };

    struct ItemArray
    {
        Item** data;             // 0x00
        std::uint32_t capacity;  // 0x08
        std::uint32_t unk0C;     // 0x0C
        std::uint32_t size;      // 0x10
        std::uint32_t unk14;     // 0x14
    };

    struct ValueArray
    {
        std::uint16_t* data;     // 0x00
        std::uint32_t capacity;  // 0x08
        std::uint32_t unk0C;     // 0x0C
        std::uint32_t size;      // 0x10
        std::uint32_t unk14;     // 0x14
    };

    std::uint16_t Function3e2ff0(std::uint32_t key) const;  // compared: 0x3e2ff0

    std::uint8_t unk00[0x20];  // 0x00
    ItemArray items;           // 0x20
    std::uint8_t unk38[0x18];  // 0x38
    ValueArray values;         // 0x50
};
