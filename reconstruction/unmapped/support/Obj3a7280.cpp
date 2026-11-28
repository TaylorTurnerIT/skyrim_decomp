// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x3a7280 Obj3a7280::SetTwoBitState
// Adapted bodies: none
#include "Obj3a7280.h"

// Updates the two-bit state for key and pairIndex in the parallel bitmask array.
void Obj3a7280::SetTwoBitState(std::uint32_t key, std::uint32_t pairIndex, std::uint32_t state)
{
    std::uint32_t baseBit = pairIndex * 2;
    std::uint32_t found = 0xffffffffu;
    for (std::uint32_t i = 0; i < keyCount && found == 0xffffffffu; ++i) {
        if (keys[i] == key) {
            found = i;
        }
    }
    if (found < maskCount) {
        std::uint32_t& slot = masks[found];
        std::uint32_t mask = slot;
        std::uint32_t bit0 = 1u << baseBit;
        std::uint32_t bit1 = 1u << (baseBit + 1);
        if (state == 1) {
            mask = (mask | bit0) & ~bit1;
        } else {
            mask &= ~bit0;
            if (state == 2) {
                mask |= bit1;
            } else {
                mask &= ~bit1;
            }
        }
        slot = mask;
    }
}
