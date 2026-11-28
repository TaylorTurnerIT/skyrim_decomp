// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj434810::Assign, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// Obj434810, RefObj434810, Slot00, DeleteThis, Assign, refCount, ptr: GUESS(low) STANDIN
#pragma once

#include <intrin.h>

class RefObj434810
{
public:
    virtual void Slot00() = 0;
    virtual void DeleteThis() = 0;

    long refCount;
};

struct Obj434810
{
    Obj434810& Assign(RefObj434810* a_rhs);  // compared: 0x434810

    RefObj434810* ptr;
};
