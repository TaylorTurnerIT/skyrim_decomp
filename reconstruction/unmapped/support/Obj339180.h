// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj339180::GetPlantedExplosive, treated as adapted: shaped like Cmd_GetPlantedExplosive_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3636
// SPDX-License-Identifier: CC0-1.0
// Obj339180, Process339180, Process339180::HasPlantedExplosive, Ref339180, Actor339180: GUESS(low); PDB lists GameFunc__native::GetPlantedExplosive_1402DCBD0
// Obj339180::GetPlantedExplosive: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Process339180
{
    bool HasPlantedExplosive();
};

struct Ref339180
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor339180 : Ref339180
{
    std::uint8_t unk1b[0xdd];
    Process339180* process;
};

class Obj339180
{
public:
    static bool GetPlantedExplosive(Ref339180* ref, void* param1, void* param2, double* result);
};
