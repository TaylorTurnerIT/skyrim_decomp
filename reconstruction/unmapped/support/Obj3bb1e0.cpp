// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3bb1e0 Obj3bb1e0::Function3bb1e0
// Adapted bodies: none
#include "Obj3bb1e0.h"

// Returns the cached string length, falling back to strlen when set to 0xFFFF.
std::size_t Obj3bb1e0::Function3bb1e0() const
{
    if (cachedLength == 0xFFFFu) {
        return strlen(text);
    }
    return cachedLength;
}
