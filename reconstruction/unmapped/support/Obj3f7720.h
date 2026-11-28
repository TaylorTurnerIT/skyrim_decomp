// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f7720::Function3f7720, treated as adapted: shaped like a singly linked list removal in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:3255
// SPDX-License-Identifier: CC0-1.0
// Obj3f7720, Obj3f7720::SubNode, Obj3f7720::ZoneEntry, Obj3f7720::Function3f7720, Obj3f7720::head: GUESS(low)
#pragma once

#include <cstdint>

class Obj3f7720
{
public:
    class SubNode
    {
    public:
        virtual ~SubNode();

        std::uint64_t unk08;  // 0x08
        SubNode* next;        // 0x10
        std::uint64_t unk18;  // 0x18
        std::uint32_t id;     // 0x20
    };

    class ZoneEntry
    {
    public:
        virtual ~ZoneEntry();

        std::uint64_t unk08;  // 0x08
        ZoneEntry* next;      // 0x10
        std::uint64_t unk18;  // 0x18
        std::uint64_t unk20;  // 0x20
        SubNode* subHead;     // 0x28
    };

    void Function3f7720(ZoneEntry* zone, const std::uint32_t& idRef);  // compared: 0x3f7720

    std::uint64_t unk00;  // 0x00
    ZoneEntry* head;      // 0x08
};
