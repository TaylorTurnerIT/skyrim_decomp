// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj421c40, g_maxLevel1_421c40, g_maxLevel2_421c40, g_maxLevel3_421c40, g_mult1_421c40, g_mult2_421c40, g_mult3_421c40, g_scale421c40, g_base421c40: GUESS(low) STANDIN
// CalculateTrainingCost: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

extern std::uint32_t g_maxLevel1_421c40;
extern std::uint32_t g_maxLevel2_421c40;
extern std::uint32_t g_maxLevel3_421c40;
extern std::uint32_t g_mult1_421c40;
extern std::uint32_t g_mult2_421c40;
extern std::uint32_t g_mult3_421c40;
extern float g_scale421c40;
extern float g_base421c40;

class Obj421c40
{
public:
    static float CalculateTrainingCost(std::uint32_t a_level);  // compared: 0x421c40
};
