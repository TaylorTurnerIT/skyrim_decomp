// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj43d0a0::BuildPath, treated as adapted: shaped like a path-building helper in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00480000_o2.cpp:457
// SPDX-License-Identifier: CC0-1.0
// Obj43d0a0, g_fmt43d0a0, g_sep43d0a0, g_ext43d0a0, FormatPath43d0a0, BuildPath: GUESS(low) STANDIN
#pragma once

#include <cstddef>

extern "C" __declspec(dllimport) int __cdecl strcpy_s(char* a_dst, std::size_t a_size, const char* a_src);
extern "C" char* __cdecl strrchr(char* a_str, int a_ch);

extern const char g_fmt43d0a0[];
extern const char g_sep43d0a0[];
extern const char g_ext43d0a0[];
extern int FormatPath43d0a0(char* a_out, std::size_t a_size, const char* a_fmt, ...);

class Obj43d0a0
{
public:
    static char* BuildPath(char* a_out, const char* a_src);  // compared: 0x43d0a0
};
