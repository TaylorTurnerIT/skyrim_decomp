// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj35ba40::AdvancePCLevel, treated as adapted: shaped like Cmd_AdvancePCLevel_Execute in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesscriptfunctions.cpp:17834
// SPDX-License-Identifier: CC0-1.0
// Obj35ba40, ActorData35ba40, BaseActor35ba40, Player35ba40, g_player35ba40: GUESS(low); PDB lists GameFunc__handler::AdvancePCLevel_1402FEA20
// Obj35ba40::AdvancePCLevel: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct ActorData35ba40
{
    void SetLevel(std::uint16_t level);
};

struct BaseActor35ba40
{
    std::uint8_t unk00[0x30];
    ActorData35ba40 actorData;
};

struct Player35ba40
{
    std::uint16_t GetLevel();

    std::uint8_t unk00[0x40];
    BaseActor35ba40* baseActor;
};

extern Player35ba40* g_player35ba40;

class Obj35ba40
{
public:
    static bool AdvancePCLevel();
};
