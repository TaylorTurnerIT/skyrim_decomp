// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x32e8e0 Obj32e8e0::FindNameIndex
// Adapted bodies: none
#include "Obj32e8e0.h"
#include <cstring>

// Searches the 16-entry fixed-width name table case-insensitively and returns the index or 16.
int Obj32e8e0::FindNameIndex(const char* name)
{
    std::size_t len = std::strlen(name);
    for (int i = 0; i < 16; ++i) {
        if (_strnicmp(g_names32e8e0[i].text, name, len) == 0) {
            return i;
        }
    }
    return 16;
}
