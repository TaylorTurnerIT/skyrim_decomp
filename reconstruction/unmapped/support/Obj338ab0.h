// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338ab0::GetHasNote, treated as adapted: shaped like Script_GetHasNoteConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3352
// SPDX-License-Identifier: CC0-1.0
// Obj338ab0, Player338ab0, Player338ab0::HasNote, g_player338ab0: GUESS(low); PDB lists GameFunc__native::GetHasNote_1402DC520
// Obj338ab0::GetHasNote: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

struct Player338ab0
{
    bool HasNote(void* note);
};

extern Player338ab0* g_player338ab0;

class Obj338ab0
{
public:
    static bool GetHasNote(void* ref, void* note, void* param2, double* result);
};
