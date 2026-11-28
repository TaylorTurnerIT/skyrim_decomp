// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// GamePlayFormulas421800: CRASHLOGGER_PDB(59818@2026.10.24)
// g_maxVal421800, g_usage421800: GUESS(low) STANDIN
// GetSneakPerSecondSkillUsage: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

extern std::int32_t g_maxVal421800;
extern float g_usage421800;

class GamePlayFormulas421800
{
public:
    static float GetSneakPerSecondSkillUsage(std::int32_t a_detection);  // compared: 0x421800
};
