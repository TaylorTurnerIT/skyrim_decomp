// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj4197b0::Assign, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// Obj4197b0, RefObj4197b0, Assign, DeleteThis, IncRefCount, DecRefCount, refCount, ptr: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class RefObj4197b0
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

class Obj4197b0
{
public:
    Obj4197b0& Assign(RefObj4197b0* a_rhs);  // compared: 0x4197b0

    RefObj4197b0* ptr;
};
