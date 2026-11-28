// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3cf9e0, Obj3cf9e0::Item, Obj3cf9e0::ListNode, Obj3cf9e0::Function3cf9e0, Obj3cf9e0::entries: GUESS(low)
#pragma once

#include <cstdint>

class Obj3cf9e0
{
public:
    struct Item
    {
        std::uint16_t key;  // 0x00
    };

    struct ListNode
    {
        Item* item;      // 0x00
        ListNode* next;  // 0x08
    };

    void Function3cf9e0();  // compared: 0x3cf9e0

    std::uint8_t unk00[0xE8];  // 0x00
    ListNode entries;          // 0xE8
};
