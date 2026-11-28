// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3e8380 Obj3e8380::Function3e8380
// Adapted bodies: none
#include "Obj3e8380.h"

// Searches both slots' list90 arrays for the first item whose id equals key.
Obj3e8380::Item* Obj3e8380::Function3e8380(std::uint16_t key) const
{
    Item* result = nullptr;
    for (std::uint32_t s = 0; result == nullptr && s < 2; ++s) {
        if (slots[s] != nullptr && slots[s]->list90 != nullptr) {
            for (std::uint32_t i = 0; result == nullptr && i < slots[s]->list90->size; ++i) {
                if (slots[s]->list90->data[i]->id == key) {
                    result = slots[s]->list90->data[i];
                }
            }
        }
    }
    return result;
}
