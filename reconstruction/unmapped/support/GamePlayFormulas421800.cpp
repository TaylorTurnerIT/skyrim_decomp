// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x421800 GamePlayFormulas421800::GetSneakPerSecondSkillUsage
#include "GamePlayFormulas421800.h"

// Returns per-second sneak skill usage when detection is active and below threshold; PDB lists GamePlayFormulas::GetSneakPerSecondSkillUsage.
float GamePlayFormulas421800::GetSneakPerSecondSkillUsage(std::int32_t a_detection)
{
    if (a_detection == 0 || a_detection >= g_maxVal421800 || a_detection == -1000) {
        return 0.0f;
    }
    return g_usage421800;
}
