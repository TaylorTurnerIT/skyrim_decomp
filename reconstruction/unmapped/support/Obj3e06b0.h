// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3e06b0::Function3e06b0, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// Obj3e06b0, Obj3e06b0::Function3e06b0, Obj3e06b0::item, Obj3e06b0::next: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e06b0
{
public:
    ~Obj3e06b0()
    {
        Function3e06b0(nullptr, nullptr);
    }

    void Function3e06b0(void (*deleter)(Obj3e06b0*, void*), void* userData);  // compared: 0x3e06b0

    void* item;       // 0x00
    Obj3e06b0* next;  // 0x08
};
