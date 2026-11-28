// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: BSFaceGenKeyframeExclusive430f50::Func7_1403D0920, treated as adapted: shaped like BSFaceGenKeyframeMultiple::DiffersFrom in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/facegen/bsfacegenkeyframe.cpp:172
// SPDX-License-Identifier: CC0-1.0
// BSFaceGenKeyframeExclusive430f50: CRASHLOGGER_PDB(59818@2026.10.24)
// Slot00, Slot01, Slot02, Slot03, Slot04, Slot05, Slot06, Slot07, Slot08, Slot09, Slot0A, Slot0B, Slot0C, IsExclusive, GetFlag, Slot0F, GetValue, type: GUESS(low) STANDIN
// Func7_1403D0920: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

class BSFaceGenKeyframeExclusive430f50
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
    virtual void Slot0F() = 0;
    virtual float GetValue() const = 0;

    bool Func7_1403D0920(const BSFaceGenKeyframeExclusive430f50* a_other);  // compared: 0x430f50

    std::uint32_t type;
};
