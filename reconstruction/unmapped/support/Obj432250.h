// Source exposure: mixed (pinned image listing; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj432250::Assign, treated as adapted: shaped like BSFaceGenKeyframeMultiple::SetValue (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSFaceGenKeyframeMultiple.h:32, MIT) and BSFaceGenKeyframeMultiple::CopyFromKeyframe in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/facegen/bsfacegenkeyframe.cpp:236
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj432250, Slot00, Slot01, Slot02, Slot03, Slot04, Slot05, Slot06, Slot07, Slot08, Slot09, Slot0A, Slot0B, Slot0C, Slot0D, Slot0E, Resize, GetValue, SetValue, Assign, type, unk0C, values, count, unk1C: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class Obj432250
{
public:
    virtual void Slot00() = 0;
    virtual void Slot01() = 0;
    virtual void Slot02() = 0;
    virtual void Slot03() = 0;
    virtual void Slot04() = 0;
    virtual void Slot05() = 0;
    virtual void Slot06() = 0;
    virtual void Slot07() = 0;
    virtual void Slot08() = 0;
    virtual void Slot09() = 0;
    virtual void Slot0A() = 0;
    virtual void Slot0B() = 0;
    virtual void Slot0C() = 0;
    virtual void Slot0D() = 0;
    virtual void Slot0E() = 0;
    virtual void Resize(std::uint32_t a_count, bool a_flag) = 0;

    float GetValue(std::uint32_t a_index) const
    {
        return (a_index < count) ? values[a_index] : 0.0f;
    }

    void SetValue(std::uint32_t a_index, float a_value)
    {
        if (a_index < count && a_value != values[a_index]) {
            values[a_index] = a_value;
            unk1C = false;
        }
    }

    Obj432250& Assign(const Obj432250& a_other);  // compared: 0x432250

    std::uint32_t type;
    float unk0C;
    float* values;
    std::uint32_t count;
    bool unk1C;
};
