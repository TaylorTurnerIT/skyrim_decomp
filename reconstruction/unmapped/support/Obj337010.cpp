// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// Adapted bodies: none
// SPDX-License-Identifier: CC0-1.0
// 0x337010 Obj337010::GetTargetHeight
#include "Obj337010.h"

// Computes the Z height difference between target and ref into result.
bool Obj337010::GetTargetHeight(Ref337010* ref, Ref337010* target, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr && target != nullptr) {
        *result = target->posZ - ref->posZ;
    }
    return true;
}
