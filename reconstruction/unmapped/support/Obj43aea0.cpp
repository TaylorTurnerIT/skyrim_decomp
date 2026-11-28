// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x43aea0 Obj43aea0::FindNameIndex
// Adapted bodies: none
#include "Obj43aea0.h"

// Searches the 16-entry name table case-insensitively and returns the matching index or -1.
std::int32_t Obj43aea0::FindNameIndex(const char* a_name)
{
    std::int32_t result = -1;
    if (a_name) {
        for (std::uint32_t i = 0; i < 16 && result == -1; ++i) {
            if (g_names43aea0[i] && _stricmp(g_names43aea0[i], a_name) == 0) {
                result = static_cast<std::int32_t>(i);
            }
        }
    }
    return result;
}
