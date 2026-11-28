// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj33e690::IsSmallBump, treated as adapted: shaped like Cmd_GetPlantedExplosive_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3636
// SPDX-License-Identifier: CC0-1.0
// Obj33e690, Process33e690, Process33e690::GetBumpState, Ref33e690, Actor33e690: GUESS(low); PDB lists GameFunc__native::IsSmallBump_1402E20B0
// Obj33e690::IsSmallBump: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Process33e690
{
    std::int32_t GetBumpState();
};

struct Ref33e690
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor33e690 : Ref33e690
{
    std::uint8_t unk1b[0xdd];
    Process33e690* process;
};

class Obj33e690
{
public:
    static bool IsSmallBump(Ref33e690* ref, void* param1, void* param2, double* result);
};
