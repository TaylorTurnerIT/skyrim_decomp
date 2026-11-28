// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3cc660 Obj3cc660::Function3cc660
// Adapted bodies: none
#include "Obj3cc660.h"

// Finds current18 in keys20 and returns the corresponding float from values38, or 0.0f.
float Obj3cc660::Function3cc660() const
{
    std::uint32_t pos = 0xFFFFFFFFu;
    for (std::uint32_t i = 0; i < size30 && pos == 0xFFFFFFFFu; ++i) {
        if (keys20[i] == current18) {
            pos = i;
        }
    }
    if (pos < 0xFFFFFFFFu) {
        return values38[pos];
    }
    return 0.0f;
}
