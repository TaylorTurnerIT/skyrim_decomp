// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3aee50 Obj3aee50::Obj3aee50
// Adapted bodies: none
#include "Obj3aee50.h"

// Zero-initializes all eight pointer slots.
Obj3aee50::Obj3aee50()
{
    for (std::uint32_t i = 0; i < 8; ++i) {
        slots[i] = nullptr;
    }
}
