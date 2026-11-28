// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj339080::Exists, treated as adapted: shaped like Cmd_Exists_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:5083
// SPDX-License-Identifier: CC0-1.0
// Obj339080: GUESS(low); PDB lists GameFunc::native::Exists
// Obj339080::Exists: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

class Obj339080
{
public:
    static bool Exists(void* ref, void* other, void* param2, double* result);
};
