// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// BSFaceGenKeyframeExclusive430ec0: CRASHLOGGER_PDB(59818@2026.10.24)
// Slot00, Slot01, Slot02, Slot03, Slot04, Slot05, Slot06, Slot07, Slot08, Slot09, Slot0A, Slot0B, Slot0C, IsExclusive, GetFlag, SetFlag, GetValue, SetValue, type, unk0C: GUESS(low) STANDIN
// Func6_1403D0890: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

class BSFaceGenKeyframeExclusive430ec0
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
    virtual bool IsExclusive() const = 0;
    virtual std::uint8_t GetFlag() const = 0;
    virtual void SetFlag(std::uint8_t a_flag) = 0;
    virtual float GetValue() const = 0;
    virtual void SetValue(float a_value) = 0;

    void Func6_1403D0890(const BSFaceGenKeyframeExclusive430ec0* a_other);  // compared: 0x430ec0

    std::uint32_t type;
    float unk0C;
};
