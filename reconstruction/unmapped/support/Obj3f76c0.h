// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f76c0::Function3f76c0, treated as adapted: shaped like a singly linked list removal in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:3255
// SPDX-License-Identifier: CC0-1.0
// Obj3f76c0, Obj3f76c0::ZoneEntry, Obj3f76c0::Function3f76c0, Obj3f76c0::head: GUESS(low)
#pragma once

#include <cstdint>

class Obj3f76c0
{
public:
    class ZoneEntry
    {
    public:
        virtual ~ZoneEntry();

        std::uint64_t unk08;  // 0x08
        ZoneEntry* next;      // 0x10
    };

    void Function3f76c0(ZoneEntry* target);  // compared: 0x3f76c0

    std::uint64_t unk00;  // 0x00
    ZoneEntry* head;      // 0x08
};
