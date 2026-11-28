// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x43ad20 Obj43ad20::FindNameIndex
// Adapted bodies: none
#include "Obj43ad20.h"

// Searches the 5-entry name table case-insensitively and returns the matching index or -1.
std::int32_t Obj43ad20::FindNameIndex(const char* a_name)
{
    std::int32_t result = -1;
    if (a_name) {
        for (std::uint32_t i = 0; i < 5 && result == -1; ++i) {
            if (g_names43ad20[i] && _stricmp(g_names43ad20[i], a_name) == 0) {
                result = static_cast<std::int32_t>(i);
            }
        }
    }
    return result;
}
