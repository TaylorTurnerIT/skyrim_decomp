// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: TESResponse3ed3d0::TestAudioFullPath, treated as adapted: shaped like TESResponse::TestAudioFullPath and the same path concatenation in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/staging/blk_00600000_od.cpp:1510
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:9641
// SPDX-License-Identifier: CC0-1.0
// 0x3ed3d0 TESResponse3ed3d0::TestAudioFullPath
#include "TESResponse3ed3d0.h"

extern "C" __declspec(dllimport) int strcat_s(char* dst, std::size_t dstSize, const char* src);

// Concatenates five path segments and separators into outPath.
bool TESResponse3ed3d0::TestAudioFullPath(char* outPath, const char* part1, const char* part2,
                               const char* part3, const char* part4,
                               const char* part5) const
{
    outPath[0] = 0;
    strcat_s(outPath, 0x104, part1);
    strcat_s(outPath, 0x104, g_sep3ed3d0_a);
    strcat_s(outPath, 0x104, part2);
    strcat_s(outPath, 0x104, g_sep3ed3d0_a);
    strcat_s(outPath, 0x104, part3);
    strcat_s(outPath, 0x104, g_sep3ed3d0_a);
    strcat_s(outPath, 0x104, part4);
    strcat_s(outPath, 0x104, g_sep3ed3d0_b);
    strcat_s(outPath, 0x104, part5);
    return true;
}
