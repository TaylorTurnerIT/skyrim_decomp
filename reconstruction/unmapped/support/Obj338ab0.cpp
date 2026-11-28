// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338ab0::GetHasNote, treated as adapted: shaped like Script_GetHasNoteConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3352
// SPDX-License-Identifier: CC0-1.0
// 0x338ab0 Obj338ab0::GetHasNote
#include "Obj338ab0.h"

// Checks whether the player has the specified note and stores 1.0 or 0.0 in result.
bool Obj338ab0::GetHasNote(void*, void* note, void*, double* result)
{
    *result = 0.0;
    if (g_player338ab0->HasNote(note)) {
        *result = 1.0;
    }
    return true;
}
