// Source exposure: mixed (pinned image listing; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj432250::Assign, treated as adapted: shaped like BSFaceGenKeyframeMultiple::SetValue (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSFaceGenKeyframeMultiple.h:32, MIT) and BSFaceGenKeyframeMultiple::CopyFromKeyframe in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/facegen/bsfacegenkeyframe.cpp:236
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x432250 Obj432250::Assign
// Recipe: reconstruction/recipes/o2-fpfast.json
#include "Obj432250.h"

// Assigns multi-value keyframe floats from a_other when both keyframes share the same type.
Obj432250& Obj432250::Assign(const Obj432250& a_other)
{
    if (type == a_other.type) {
        if (a_other.unk0C != unk0C) {
            unk0C = a_other.unk0C;
        }
        unk1C = a_other.unk1C;
        Resize(a_other.count, true);
        for (std::uint32_t i = 0; i < count; ++i) {
            SetValue(i, a_other.GetValue(i));
        }
    }
    return *this;
}
