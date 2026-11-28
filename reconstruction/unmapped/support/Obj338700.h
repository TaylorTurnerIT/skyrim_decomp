// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338700::IsEssential, treated as adapted: shaped like Script_IsEssentialConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:435
// SPDX-License-Identifier: CC0-1.0
// Obj338700, Ref338700, Actor338700, Actor338700::IsEssential: GUESS(low); PDB lists GameFunc__native::IsEssential_1402DC1D0
// Obj338700::IsEssential: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Ref338700
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor338700 : Ref338700
{
    bool IsEssential(bool checkProtected);
};

class Obj338700
{
public:
    static bool IsEssential(Ref338700* ref, void* param1, void* param2, double* result);
};
