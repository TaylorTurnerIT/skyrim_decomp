// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj339080::Exists, treated as adapted: shaped like Cmd_Exists_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:5083
// SPDX-License-Identifier: CC0-1.0
// 0x339080 Obj339080::Exists
#include "Obj339080.h"

// Writes 1.0 to result if ref is non-null and distinct from other, otherwise 0.0.
bool Obj339080::Exists(void* ref, void* other, void*, double* result)
{
    if (ref != nullptr && ref != other) {
        *result = 1.0;
    } else {
        *result = 0.0;
    }
    return true;
}
