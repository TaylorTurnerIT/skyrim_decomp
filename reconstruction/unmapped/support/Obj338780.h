// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338780::IsPlayerMovingIntoNewSpace, treated as adapted: shaped like IsPlayerEnteringSpaceConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:449
// SPDX-License-Identifier: CC0-1.0
// Obj338780, Player338780, g_player338780: GUESS(low); PDB lists GameFunc__native::IsPlayerMovingIntoNewSpace_1402DC250
// Obj338780::IsPlayerMovingIntoNewSpace: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Player338780
{
    std::uint8_t unk00[0xbe8];
    std::uint32_t flagsBE8;
    std::uint32_t flagsBEC;
};

extern Player338780* g_player338780;

class Obj338780
{
public:
    static bool IsPlayerMovingIntoNewSpace(void* ref, void* param1, void* param2, double* result);
};
