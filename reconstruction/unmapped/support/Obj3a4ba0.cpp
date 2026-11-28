// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Cookbook: 0x3a4ba0 35
// 0x3a4ba0 Obj3a4ba0::FindIndex
// Adapted bodies: none
#include "Obj3a4ba0.h"

// Searches the 9-entry table for key and returns its index, or 4 if not found.
std::uint32_t Obj3a4ba0::FindIndex(std::uint32_t key)
{
    std::uint32_t result = 4;
    bool found = false;
    for (std::uint32_t i = 0; i < 9 && !found; ++i) {
        if (g_table3a4ba0[i] == key) {
            result = i;
            found = true;
        }
    }
    return result;
}
