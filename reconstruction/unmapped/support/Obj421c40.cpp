// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x421c40 Obj421c40::CalculateTrainingCost
#include "Obj421c40.h"

// Computes tiered skill training cost; PDB lists CalculateTrainingCost_1403C1180.
float Obj421c40::CalculateTrainingCost(std::uint32_t a_level)
{
    std::uint32_t tierMult = 1;
    if (a_level <= g_maxLevel1_421c40) {
        tierMult = g_mult1_421c40;
    } else if (a_level <= g_maxLevel2_421c40) {
        tierMult = g_mult2_421c40;
    } else if (a_level <= g_maxLevel3_421c40) {
        tierMult = g_mult3_421c40;
    }

    return static_cast<float>(tierMult) * g_scale421c40 * static_cast<float>(a_level) + g_base421c40;
}
