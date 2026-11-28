// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj35ba40::AdvancePCLevel, treated as adapted: shaped like Cmd_AdvancePCLevel_Execute in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesscriptfunctions.cpp:17834
// SPDX-License-Identifier: CC0-1.0
// 0x35ba40 Obj35ba40::AdvancePCLevel
#include "Obj35ba40.h"

// Increments the player's base actor level by one when the player singleton is present.
bool Obj35ba40::AdvancePCLevel()
{
    Player35ba40* player = g_player35ba40;
    if (player != nullptr) {
        BaseActor35ba40* base = player->baseActor;
        std::uint16_t nextLevel = static_cast<std::uint16_t>(player->GetLevel() + 1);
        base->actorData.SetLevel(nextLevel);
    }
    return true;
}
