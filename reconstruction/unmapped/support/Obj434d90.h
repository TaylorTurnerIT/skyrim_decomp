// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj434d90::SetHandle, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// Obj434d90, RefObj434d90, Inner434d90, Slot00, DeleteThis, SetHandle, refCount, unk00, handle, inner: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class RefObj434d90
{
public:
    virtual void Slot00() = 0;
    virtual void DeleteThis() = 0;

    long refCount;
};

struct Inner434d90
{
    std::uint8_t unk00[0x58];
    RefObj434d90* handle;
};
static_assert(sizeof(Inner434d90) == 0x60, "Inner434d90 size");

struct Obj434d90
{
    void SetHandle(RefObj434d90* a_rhs);  // compared: 0x434d90

    std::uint8_t unk00[0x78];
    Inner434d90* inner;
};
static_assert(sizeof(Obj434d90) == 0x80, "Obj434d90 size");
