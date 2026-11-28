// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj336cc0::GetDefaultOpen, treated as adapted: shaped like Script_GetDefaultOpenConditionFunction and the same condition function in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:12087
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00500000_o2.cpp:3552
// SPDX-License-Identifier: CC0-1.0
// 0x336cc0 Obj336cc0::GetDefaultOpen
#include "Obj336cc0.h"

// Evaluates whether the reference has its default-open flag set and stores 0.0 or 1.0 in result.
bool Obj336cc0::GetDefaultOpen(Ref336cc0* ref, void*, void*, double* result)
{
    if (ref == nullptr) {
        return false;
    }

    *result = 0.0;
    if (ref->HasFlag(8)) {
        *result = 1.0;
    }
    return true;
}
