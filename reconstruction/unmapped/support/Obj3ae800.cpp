// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3ae800 Obj3ae800::Function3ae800
// Adapted bodies: none
#include "Obj3ae800.h"

// Returns true when two tagged values differ in tag or active payload.
bool Obj3ae800::Function3ae800(const Obj3ae800& other) const
{
    bool diff = (tag != other.tag);
    if (!diff) {
        if (tag == 0) {
            diff = (value64 != other.value64);
        } else {
            diff = (value32 != other.value32);
        }
    }
    return diff;
}
