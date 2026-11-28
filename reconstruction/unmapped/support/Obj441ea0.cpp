// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x441ea0 Obj441ea0::IsValid
// Adapted bodies: none
#include "Obj441ea0.h"

// Checks whether the packed handle entry is active, matches generation bits, and points back to this slot.
bool Obj441ea0::IsValid() const
{
    std::uint32_t raw = handle;
    std::uint32_t idx = raw & 0xFFFFFu;
    const HandleEntry441ea0& entry = g_handleTable441ea0[idx];
    if ((entry.flags & 0x04000000u) == 0 || ((entry.flags ^ raw) & 0x03F00000u) != 0) {
        return false;
    }
    return (entry.target->unk08 >> 11) == idx;
}
