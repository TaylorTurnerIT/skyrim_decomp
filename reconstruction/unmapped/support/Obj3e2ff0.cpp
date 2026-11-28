// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3e2ff0 Obj3e2ff0::Function3e2ff0
// Adapted bodies: none
#include "Obj3e2ff0.h"

// Returns the value paired with the first item matching key, or 0xFFFF if absent.
std::uint16_t Obj3e2ff0::Function3e2ff0(std::uint32_t key) const
{
    std::uint16_t result = 0xFFFFu;
    for (std::uint32_t i = 0; result == 0xFFFFu && i < items.size; ++i) {
        if (items.data[i]->key30 == key) {
            result = values.data[i];
        }
    }
    return result;
}
