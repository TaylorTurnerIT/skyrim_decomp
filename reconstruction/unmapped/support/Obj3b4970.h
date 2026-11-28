// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3b4970, Obj3b4970::FixedString, Obj3b4970::Entry, Obj3b4970::ListNode, Obj3b4970::Function3b4970, Obj3b4970::entries: GUESS(low)
#pragma once

#include <cstdint>

class Obj3b4970
{
public:
    class FixedString
    {
    public:
        std::uint32_t GetLength() const;

        const char* data;  // 0x00
    };

    struct Entry
    {
        std::uint8_t unk00[0x18];  // 0x00
        FixedString text;          // 0x18
    };

    struct ListNode
    {
        Entry* item;     // 0x00
        ListNode* next;  // 0x08
    };

    const char* Function3b4970(std::uint32_t index) const;  // compared: 0x3b4970

    std::uint8_t unk00[0xE0];  // 0x00
    ListNode entries;          // 0xE0
};
