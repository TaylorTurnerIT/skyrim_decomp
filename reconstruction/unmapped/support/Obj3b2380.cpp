// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b2380 Obj3b2380::Function3b2380
// Adapted bodies: none
#include "Obj3b2380.h"

// Advances past the first newline and any following CR/LF bytes, returning nullptr at end of string.
const char* Obj3b2380::Function3b2380(const char* text)
{
    const char* cursor = strchr(text, 10);
    while (cursor != nullptr && *cursor != 0 && (*cursor == 13 || *cursor == 10)) {
        ++cursor;
    }
    if (cursor != nullptr && *cursor != 0) {
        return cursor;
    }
    return nullptr;
}
