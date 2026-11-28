// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj377d80, CombatController377d80, Ref377d80, Actor377d80: GUESS(low); PDB lists ConsoleFunc__handler::DebugCombatBehavior_140319920
// Obj377d80::DebugCombatBehavior: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct CombatController377d80
{
    void DebugBehavior();
};

struct Ref377d80
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor377d80 : Ref377d80
{
    std::uint8_t unk1b[0x145];
    CombatController377d80* combatController;
};

class Obj377d80
{
public:
    static bool DebugCombatBehavior(void* paramInfo, void* scriptData, Ref377d80* thisObj);
};
