// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x41fb60 CombatFormulas41fb60::GetArrowPowerSpeedMult
#include "CombatFormulas41fb60.h"

// Interpolates arrow speed multiplier from draw power; PDB lists CombatFormulas::GetArrowPowerSpeedMult.
float CombatFormulas41fb60::GetArrowPowerSpeedMult(float a_power)
{
    return ((a_power - g_minTime41fb60) / (1.0f - g_minTime41fb60)) * (1.0f - g_minMult41fb60) + g_minMult41fb60;
}
