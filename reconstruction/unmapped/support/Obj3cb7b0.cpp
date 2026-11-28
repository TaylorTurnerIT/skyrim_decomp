// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3cb7b0::Function3cb7b0, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// 0x3cb7b0 Obj3cb7b0::Function3cb7b0
#include "Obj3cb7b0.h"
#include <intrin.h>

// Assigns rhs to this intrusive smart pointer, retaining the new object and releasing the old one.
Obj3cb7b0& Obj3cb7b0::Function3cb7b0(RefCounted* rhs)
{
    RefCounted* old = ptr;
    if (old != rhs) {
        if (rhs != nullptr) {
            // atomic reference-count increment required for thread-safe retain
            _InterlockedIncrement(&rhs->refCount);
        }
        ptr = rhs;
        if (old != nullptr) {
            // atomic reference-count decrement required for thread-safe release
            if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
                old->DeleteThis();
            }
        }
    }
    return *this;
}
