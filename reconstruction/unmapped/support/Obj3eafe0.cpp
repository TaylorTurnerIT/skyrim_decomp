// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3eafe0 Obj3eafe0::Obj3eafe0
// Adapted bodies: none
#include "Obj3eafe0.h"

// Initializes the 4 slot groups to -1 and clears the counts and trailing fields.
Obj3eafe0::Obj3eafe0()
{
    unk90 = 0;
    unk98 = 0;
    unkA0 = 0;
    unkA8 = 0;
    unkB0 = 0;
    unkB8 = 0;
    unkC0 = 0;
    for (std::int32_t i = 0; i < 4; ++i) {
        counts[i] = 0;
        for (std::int32_t j = 0; j < 8; ++j) {
            slots[i][j] = -1;
        }
    }
}
