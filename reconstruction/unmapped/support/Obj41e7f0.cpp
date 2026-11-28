// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x41e7f0 Obj41e7f0::ScaleByFlag
#include "Obj41e7f0.h"

// Multiplies a_value by one of two global settings selected by a_flag;
// community PDB lists CombatFormulas::ChooseMeleeWeapon, which does not fit this body.
float Obj41e7f0::ScaleByFlag(float a_value, void*, bool a_flag)
{
    if (a_flag) {
        return g_multA41e7f0 * a_value;
    }
    return g_multB41e7f0 * a_value;
}
