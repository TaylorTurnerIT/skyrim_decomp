// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj43d0a0::BuildPath, treated as adapted: shaped like a path-building helper in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00480000_o2.cpp:457
// SPDX-License-Identifier: CC0-1.0
// 0x43d0a0 Obj43d0a0::BuildPath
#include "Obj43d0a0.h"

// Strips the file extension from a_src and formats a derived path into a_out.
char* Obj43d0a0::BuildPath(char* a_out, const char* a_src)
{
    if (!a_src) {
        return nullptr;
    }

    char stem[260];
    strcpy_s(stem, sizeof(stem), a_src);
    char* dot = strrchr(stem, '.');
    if (!dot) {
        return nullptr;
    }

    *dot = 0;
    FormatPath43d0a0(a_out, 260, g_fmt43d0a0, stem, g_sep43d0a0, g_ext43d0a0);
    return a_out;
}
