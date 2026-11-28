// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj435c70::Assign, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// 0x435c70 Obj435c70::Assign
#include "Obj435c70.h"

// Replaces the retained reference-counted pointer, updating both reference counts.
Obj435c70& Obj435c70::Assign(RefObj435c70* a_rhs)
{
    RefObj435c70* old = ptr;
    if (old != a_rhs) {
        if (a_rhs) {
            // atomic intrusive reference count increment
            _InterlockedIncrement(&a_rhs->refCount);
        }
        ptr = a_rhs;
        // atomic intrusive reference count decrement
        if (old && _InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            old->DeleteThis();
        }
    }
    return *this;
}
