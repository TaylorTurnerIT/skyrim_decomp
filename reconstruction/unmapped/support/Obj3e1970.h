// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3e1970::Function3e1970, treated as adapted: shaped like a list search loop with a found flag in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00720000_o2.cpp:37020
// SPDX-License-Identifier: CC0-1.0
// Obj3e1970, Obj3e1970::Item, Obj3e1970::ListNode, Obj3e1970::Function3e1970, Obj3e1970::entries: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e1970
{
public:
    struct Item
    {
        std::uint8_t unk00[0x16];  // 0x00
        std::uint8_t flag16;       // 0x16
    };

    struct ListNode
    {
        Item* item;      // 0x00
        ListNode* next;  // 0x08
    };

    bool Function3e1970() const;  // compared: 0x3e1970

    std::uint64_t unk00;  // 0x00
    ListNode entries;     // 0x08
};
