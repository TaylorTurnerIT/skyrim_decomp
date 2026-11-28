// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj336cc0::GetDefaultOpen, treated as adapted: shaped like Script_GetDefaultOpenConditionFunction and the same condition function in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:12087
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00500000_o2.cpp:3552
// SPDX-License-Identifier: CC0-1.0
// Obj336cc0, Ref336cc0, Ref336cc0::HasFlag: GUESS(low); PDB lists GameFunc__native::GetDefaultOpen_1402DA830
// Obj336cc0::GetDefaultOpen: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Ref336cc0
{
    bool HasFlag(std::uint32_t flag);
};

class Obj336cc0
{
public:
    static bool GetDefaultOpen(Ref336cc0* ref, void* param1, void* param2, double* result);
};
