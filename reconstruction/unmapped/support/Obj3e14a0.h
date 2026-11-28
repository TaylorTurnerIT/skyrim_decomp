// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3e14a0, Obj3e14a0::Item, Obj3e14a0::Function3e14a0, Obj3e14a0::item: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e14a0
{
public:
    class Item
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void Unk_02();
        virtual void Unk_03();
        virtual void Unk_04(Item* previous);
    };

    void Function3e14a0(Item* nextItem);  // compared: 0x3e14a0

    std::uint8_t unk00[0x58];  // 0x00
    Item* item;                // 0x58
};
