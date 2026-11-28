// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: BSFaceGenKeyframeExclusive430f50::Func7_1403D0920, treated as adapted: shaped like BSFaceGenKeyframeMultiple::DiffersFrom in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/facegen/bsfacegenkeyframe.cpp:172
// SPDX-License-Identifier: CC0-1.0
// 0x430f50 BSFaceGenKeyframeExclusive430f50::Func7_1403D0920
// Recipe: reconstruction/recipes/o2-fpfast.json
#include "BSFaceGenKeyframeExclusive430f50.h"

// Compares exclusive keyframe state against a_other; PDB lists BSFaceGenKeyframeExclusive::Func7_1403D0920.
bool BSFaceGenKeyframeExclusive430f50::Func7_1403D0920(const BSFaceGenKeyframeExclusive430f50* a_other)
{
    if (!a_other || !a_other->IsExclusive()) {
        return true;
    }
    if (a_other->type != type) {
        return true;
    }
    if (a_other->GetFlag() != GetFlag()) {
        return true;
    }
    return a_other->GetValue() != GetValue();
}
