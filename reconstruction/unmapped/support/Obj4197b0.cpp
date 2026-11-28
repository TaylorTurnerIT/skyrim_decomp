// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj4197b0::Assign, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// 0x4197b0 Obj4197b0::Assign
#include "Obj4197b0.h"

// Replaces the stored intrusive pointer, incrementing the new target and releasing the old one.
Obj4197b0& Obj4197b0::Assign(RefObj4197b0* a_rhs)
{
    RefObj4197b0* old = ptr;
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
