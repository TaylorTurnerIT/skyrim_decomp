// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj435c70::Assign, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// Obj435c70, RefObj435c70, Slot00, DeleteThis, Assign, refCount, ptr: GUESS(low) STANDIN
#pragma once

#include <intrin.h>

class RefObj435c70
{
public:
    virtual void Slot00() = 0;
    virtual void DeleteThis() = 0;

    long refCount;
};

struct Obj435c70
{
    Obj435c70& Assign(RefObj435c70* a_rhs);  // compared: 0x435c70

    RefObj435c70* ptr;
};
