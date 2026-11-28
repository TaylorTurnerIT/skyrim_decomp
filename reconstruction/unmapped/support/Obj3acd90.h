// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3acd90, Obj3acd90::Item, Obj3acd90::Function3acd90, Obj3acd90::item: GUESS(low)
#pragma once

#include <cstdint>

class Obj3acd90
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

    void Function3acd90(Item* nextItem);  // compared: 0x3acd90

    std::uint8_t unk00[0x58];  // 0x00
    Item* item;                // 0x58
};
