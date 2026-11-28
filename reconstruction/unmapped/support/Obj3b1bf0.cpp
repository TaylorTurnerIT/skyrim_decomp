// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b1bf0 Obj3b1bf0::Function3b1bf0
// Adapted bodies: none
#include "Obj3b1bf0.h"

// Looks up a case-insensitive entry name in the static table and returns its index or 0xFF.
std::uint32_t Obj3b1bf0::Function3b1bf0(const char* name)
{
    for (std::int32_t i = 0; i < 183; ++i) {
        if (_stricmp(name, gTable209a6c0[i].name) == 0) {
            return static_cast<std::uint32_t>(i);
        }
    }
    return 0xFFu;
}
