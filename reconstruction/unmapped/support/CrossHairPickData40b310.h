// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// CrossHairPickData40b310: CRASHLOGGER_PDB(59818@2026.10.24)
// Vec3_40b310, g_invalidHandle40b310, g_zeroVec40b310, Clear, unk00, handle04, handle08, handle0c, pos, unk1c, unk20, x, y, z: GUESS(low) STANDIN
#pragma once

#include <cstdint>

struct Vec3_40b310
{
    float x;
    float y;
    float z;
};

extern std::uint32_t g_invalidHandle40b310;
extern Vec3_40b310 g_zeroVec40b310;

class CrossHairPickData40b310
{
public:
    void Clear();  // compared: 0x40b310

    std::uint32_t unk00;
    std::uint32_t handle04;
    std::uint32_t handle08;
    std::uint32_t handle0c;
    Vec3_40b310 pos;
    std::uint32_t unk1c;
    void* unk20;
};
