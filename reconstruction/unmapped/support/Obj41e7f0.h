// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj41e7f0, ScaleByFlag, g_multA41e7f0, g_multB41e7f0: GUESS(low) STANDIN
#pragma once

extern float g_multA41e7f0;
extern float g_multB41e7f0;

class Obj41e7f0
{
public:
    static float ScaleByFlag(float a_value, void*, bool a_flag);  // compared: 0x41e7f0
};
