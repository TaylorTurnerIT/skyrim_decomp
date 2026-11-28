// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// Adapted bodies: none
// SPDX-License-Identifier: CC0-1.0
// 0x40b310 CrossHairPickData40b310::Clear
#include "CrossHairPickData40b310.h"

// Resets handles, position, and target pointer; PDB lists this under CrossHairPickData::Clear_1403AB670.
void CrossHairPickData40b310::Clear()
{
    unk20 = nullptr;
    handle04 = g_invalidHandle40b310;
    handle0c = g_invalidHandle40b310;
    handle08 = g_invalidHandle40b310;
    pos.x = g_zeroVec40b310.x;
    pos.y = g_zeroVec40b310.y;
    pos.z = g_zeroVec40b310.z;
}
