// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: original, from the pinned image listing.
// Adapted bodies: none
// SPDX-License-Identifier: CC0-1.0
// 0x431000 Obj431000::Assign
// Recipe: reconstruction/recipes/o2-fpfast.json
#include "Obj431000.h"

// Assigns scalar value and flag from a_other when both keyframes share the same type.
Obj431000& Obj431000::Assign(const Obj431000& a_other)
{
    if (type == a_other.type) {
        if (a_other.unk0C != unk0C) {
            unk0C = a_other.unk0C;
        }
        SetValue(a_other.GetValue());
        SetFlag(a_other.GetFlag());
    }
    return *this;
}
