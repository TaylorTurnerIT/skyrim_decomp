// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338780::IsPlayerMovingIntoNewSpace, treated as adapted: shaped like IsPlayerEnteringSpaceConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:449
// SPDX-License-Identifier: CC0-1.0
// 0x338780 Obj338780::IsPlayerMovingIntoNewSpace
#include "Obj338780.h"

// Writes 1.0 to result if either player space-transition flag is set, otherwise 0.0.
bool Obj338780::IsPlayerMovingIntoNewSpace(void*, void*, void*, double* result)
{
    *result = 0.0;
    Player338780* player = g_player338780;
    if ((player->flagsBEC & 1) != 0 || (player->flagsBE8 & 2) != 0) {
        *result = 1.0;
    }
    return true;
}
