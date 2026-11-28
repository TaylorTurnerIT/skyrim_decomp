// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// CombatFormulas41fb60: CRASHLOGGER_PDB(59818@2026.10.24)
// g_minTime41fb60, g_minMult41fb60, g_one41fb60: GUESS(low) STANDIN
// GetArrowPowerSpeedMult: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

extern float g_minTime41fb60;
extern float g_minMult41fb60;
extern const float g_one41fb60;

class CombatFormulas41fb60
{
public:
    static float GetArrowPowerSpeedMult(float a_power);  // compared: 0x41fb60
};
