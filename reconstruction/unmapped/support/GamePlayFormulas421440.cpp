// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x421440 GamePlayFormulas421440::CalcImpactShaderAmount
#include "GamePlayFormulas421440.h"

// Computes linear impact shader amount; PDB lists GamePlayFormulas::CalcImpactShaderAmount.
float GamePlayFormulas421440::CalcImpactShaderAmount(float a_value)
{
    float maxVal = g_maxDist421440;
    if (a_value > maxVal) {
        return 0.0f;
    }
    return (g_one421440 - a_value / maxVal) * (g_hi421440 - g_lo421440) + g_lo421440;
}
