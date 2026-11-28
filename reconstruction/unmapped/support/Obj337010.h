// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj337010, Ref337010: GUESS(low); PDB lists GameFunc__native::GetTargetHeight_1402DAB90
// Obj337010::GetTargetHeight: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Ref337010
{
    std::uint8_t unk00[0x5c];
    float posZ;
};

class Obj337010
{
public:
    static bool GetTargetHeight(Ref337010* ref, Ref337010* target, void* param2, double* result);
};
