// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj41a070::SetSlot, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// Obj41a070, RefObj41a070, RefPtr41a070, SetSlot, DeleteThis, IncRefCount, DecRefCount, refCount, ptr, slots, unk00: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class RefObj41a070
{
public:
    virtual void Slot00() = 0;
    virtual void DeleteThis() = 0;

    void IncRefCount()
    {
        // atomic reference-count increment on intrusive object
        _InterlockedIncrement(&refCount);
    }

    void DecRefCount()
    {
        // atomic reference-count decrement on intrusive object
        if (_InterlockedExchangeAdd(&refCount, -1) == 1) {
            DeleteThis();
        }
    }

    long refCount;
};

struct RefPtr41a070
{
    RefPtr41a070& operator=(RefObj41a070* a_rhs)
    {
        RefObj41a070* old = ptr;
        if (old != a_rhs) {
            if (a_rhs) {
                a_rhs->IncRefCount();
            }
            ptr = a_rhs;
            if (old) {
                old->DecRefCount();
            }
        }
        return *this;
    }

    RefObj41a070* ptr;
};

class Obj41a070
{
public:
    void SetSlot(std::uint32_t a_index, RefObj41a070* a_obj);  // compared: 0x41a070

    std::uint8_t unk00[0x98];
    RefPtr41a070 slots[8];
};
