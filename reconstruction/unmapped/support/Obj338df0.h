// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338df0::GetFactionCombatReaction, treated as adapted: shaped like Script_GetFactionCombatReactionConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:12702
// SPDX-License-Identifier: CC0-1.0
// Obj338df0, FactionReaction338df0, Faction338df0: GUESS(low); PDB lists GameFunc__native::GetFactionCombatReaction_1402DC860
// Obj338df0::GetFactionCombatReaction: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct FactionReaction338df0
{
    std::int32_t GetReaction(void* otherFaction);
};

struct Faction338df0
{
    std::uint8_t unk00[0x30];
    FactionReaction338df0 reactions;
};

class Obj338df0
{
public:
    static bool GetFactionCombatReaction(void* ref, Faction338df0* faction1, void* faction2, double* result);
};
