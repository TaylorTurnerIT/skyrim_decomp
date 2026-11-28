// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x4214c0 Obj4214c0::GetSprintStaminaDrain
#include "Obj4214c0.h"

// Computes sprint stamina drain; PDB lists getSprintStaminaDrain_1403c0a30.
float Obj4214c0::GetSprintStaminaDrain(float a_weight, float a_delta)
{
    return (g_weightMult4214c0 * a_weight + g_base4214c0) * a_delta * g_globalMult4214c0;
}
