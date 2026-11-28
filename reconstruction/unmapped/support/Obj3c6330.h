// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3c6330, Obj3c6330::SubData, Obj3c6330::Form, Obj3c6330::Entry, Obj3c6330::Lookup, Obj3c6330::Function3c6330, Obj3c6330::items, Obj3c6330::count, Obj3c6330::filtered: GUESS(low)
#pragma once

#include <cstdint>

class Obj3c6330
{
public:
    struct SubData
    {
        std::uint64_t unk00;  // 0x00
    };

    struct Form
    {
        std::uint8_t unk00[0x1A];   // 0x000
        std::uint8_t formType;      // 0x01A
        std::uint8_t unk1B[0x183];  // 0x01B
        std::uint8_t flags19E;      // 0x19E
        std::uint8_t unk19F[0x71];  // 0x19F
        SubData sub210;             // 0x210
    };

    struct Entry
    {
        std::uint64_t unk00;  // 0x00
        Form* form;           // 0x08
    };

    class Lookup
    {
    public:
        void* Find(SubData* key, bool flag);
    };

    void Function3c6330(Lookup* lookup);  // compared: 0x3c6330

    std::uint8_t unk00[0x90];   // 0x000
    Entry** items;              // 0x090
    std::uint32_t count;        // 0x098
    std::uint8_t unk9C[0x1A7];  // 0x09C
    bool filtered;              // 0x243
};
