// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3e1610::Function3e1610, treated as adapted: shaped like a list search loop in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00480000_o2.cpp:40050
// SPDX-License-Identifier: CC0-1.0
// Obj3e1610, Obj3e1610::Item, Obj3e1610::ListNode, Obj3e1610::Function3e1610, Obj3e1610::entries: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e1610
{
public:
    struct Item
    {
        std::uint8_t unk00[0x15];  // 0x00
        std::uint8_t field15;      // 0x15
    };

    struct ListNode
    {
        Item* item;      // 0x00
        ListNode* next;  // 0x08
    };

    Item* Function3e1610(std::uint8_t target) const;  // compared: 0x3e1610

    std::uint64_t unk00;  // 0x00
    ListNode entries;     // 0x08
};
