// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b1ca0 Obj3b1ca0::Function3b1ca0
// Adapted bodies: none
#include "Obj3b1ca0.h"

// Looks up an object's name in the static table and returns its index or 0xFF.
std::uint32_t Obj3b1ca0::Function3b1ca0(const Obj3b1ca0* entry)
{
    if (entry != nullptr) {
        for (std::int32_t i = 0; i < 183; ++i) {
            if (_stricmp(entry->name, gTable209a6c0_3b1ca0[i].name) == 0) {
                return static_cast<std::uint32_t>(i);
            }
        }
    }
    return 0xFFu;
}
