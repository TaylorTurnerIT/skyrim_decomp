// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// GamePlayFormulas421440: CRASHLOGGER_PDB(59818@2026.10.24)
// g_maxDist421440, g_hi421440, g_lo421440, g_one421440: GUESS(low) STANDIN
// CalcImpactShaderAmount: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

extern float g_maxDist421440;
extern float g_hi421440;
extern float g_lo421440;
extern const float g_one421440;

class GamePlayFormulas421440
{
public:
    static float CalcImpactShaderAmount(float a_value);  // compared: 0x421440
};
