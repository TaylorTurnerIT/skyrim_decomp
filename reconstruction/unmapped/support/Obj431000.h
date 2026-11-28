// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: original, from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj431000, Slot00, Slot01, Slot02, Slot03, Slot04, Slot05, Slot06, Slot07, Slot08, Slot09, Slot0A, Slot0B, Slot0C, Slot0D, GetFlag, SetFlag, GetValue, SetValue, Assign, type, unk0C: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class Obj431000
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
    virtual std::uint8_t GetFlag() const = 0;
    virtual void SetFlag(std::uint8_t a_flag) = 0;
    virtual float GetValue() const = 0;
    virtual void SetValue(float a_value) = 0;

    Obj431000& Assign(const Obj431000& a_other);  // compared: 0x431000

    std::uint32_t type;
    float unk0C;
};
