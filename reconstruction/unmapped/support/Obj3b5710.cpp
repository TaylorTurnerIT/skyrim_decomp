// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b5710 Obj3b5710::Function3b5710
// Adapted bodies: none
#include "Obj3b5710.h"

// Sets or clears flag bits in flags58 and marks change flag 2.
void Obj3b5710::Function3b5710(std::uint32_t mask, bool enable)
{
    if (enable) {
        flags58 |= mask;
    } else {
        flags58 &= ~mask;
    }
    Unk_0A(2);
}
