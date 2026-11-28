// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj434d90::SetHandle, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// 0x434d90 Obj434d90::SetHandle
#include "Obj434d90.h"

// Replaces the reference-counted handle stored inside inner.
void Obj434d90::SetHandle(RefObj434d90* a_rhs)
{
    Inner434d90* obj = inner;
    RefObj434d90* old = obj->handle;
    if (old != a_rhs) {
        if (a_rhs) {
            // atomic intrusive reference count increment
            _InterlockedIncrement(&a_rhs->refCount);
        }
        obj->handle = a_rhs;
        // atomic intrusive reference count decrement
        if (old && _InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            old->DeleteThis();
        }
    }
}
