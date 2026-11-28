// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// Adapted bodies: none
// SPDX-License-Identifier: CC0-1.0
// 0x430ec0 BSFaceGenKeyframeExclusive430ec0::Func6_1403D0890
// Recipe: reconstruction/recipes/o2-fpfast.json
#include "BSFaceGenKeyframeExclusive430ec0.h"

// Copies exclusive keyframe state from a_other; PDB lists BSFaceGenKeyframeExclusive::Func6_1403D0890.
void BSFaceGenKeyframeExclusive430ec0::Func6_1403D0890(const BSFaceGenKeyframeExclusive430ec0* a_other)
{
    if (!a_other || !a_other->IsExclusive()) {
        return;
    }

    if (a_other->type != type) {
        type = a_other->type;
    }
    if (a_other->unk0C != unk0C) {
        unk0C = a_other->unk0C;
    }
    SetFlag(a_other->GetFlag());
    SetValue(a_other->GetValue());
}
