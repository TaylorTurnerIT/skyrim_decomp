// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338df0::GetFactionCombatReaction, treated as adapted: shaped like Script_GetFactionCombatReactionConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:12702
// SPDX-License-Identifier: CC0-1.0
// 0x338df0 Obj338df0::GetFactionCombatReaction
#include "Obj338df0.h"

// Queries the combat reaction between two factions and writes it as a double to result.
bool Obj338df0::GetFactionCombatReaction(void*, Faction338df0* faction1, void* faction2, double* result)
{
    if (faction2 != nullptr && faction1 != nullptr) {
        *result = static_cast<double>(faction1->reactions.GetReaction(faction2));
    }
    return true;
}
