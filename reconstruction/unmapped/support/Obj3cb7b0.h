// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3cb7b0::Function3cb7b0, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// Obj3cb7b0, Obj3cb7b0::RefCounted, Obj3cb7b0::Function3cb7b0, Obj3cb7b0::ptr: GUESS(low)
#pragma once

#include <cstdint>

class Obj3cb7b0
{
public:
    class RefCounted
    {
    public:
        virtual void Unk_00();
        virtual void DeleteThis();

        long refCount;  // 0x08
    };

    Obj3cb7b0& Function3cb7b0(RefCounted* rhs);  // compared: 0x3cb7b0

    RefCounted* ptr;  // 0x00
};
