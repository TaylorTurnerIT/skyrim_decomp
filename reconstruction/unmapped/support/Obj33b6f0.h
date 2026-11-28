// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj33b6f0::GetReplacedItemType, treated as adapted: shaped like Cmd_GetPlantedExplosive_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3636
// SPDX-License-Identifier: CC0-1.0
// Obj33b6f0, Process33b6f0, Process33b6f0::GetReplacedItemType, Ref33b6f0, Actor33b6f0: GUESS(low); PDB lists GameFunc__native::GetReplacedItemType_1402DF110
// Obj33b6f0::GetReplacedItemType: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Process33b6f0
{
    std::int32_t GetReplacedItemType();
};

struct Ref33b6f0
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor33b6f0 : Ref33b6f0
{
    std::uint8_t unk1b[0xdd];
    Process33b6f0* process;
};

class Obj33b6f0
{
public:
    static bool GetReplacedItemType(Ref33b6f0* ref, void* param1, void* param2, double* result);
};
