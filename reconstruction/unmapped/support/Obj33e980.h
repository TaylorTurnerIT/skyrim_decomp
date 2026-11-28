// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj33e980, AnimGraphHolder33e980, Ref33e980: GUESS(low); PDB lists GameFunc__native::GetGraphVariableInt_1402E23A0
// Obj33e980::GetGraphVariableInt: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct AnimGraphHolder33e980
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual void Slot03();
    virtual void Slot04();
    virtual void Slot05();
    virtual void Slot06();
    virtual void Slot07();
    virtual void Slot08();
    virtual void Slot09();
    virtual void Slot0a();
    virtual void Slot0b();
    virtual void Slot0c();
    virtual void Slot0d();
    virtual void Slot0e();
    virtual void Slot0f();
    virtual void Slot10();
    virtual bool GetGraphVariableInt(const void* variableName, std::int32_t& outValue);
};

struct Ref33e980
{
    std::uint8_t unk00[0x38];
    AnimGraphHolder33e980 animGraph;
};

class Obj33e980
{
public:
    static bool GetGraphVariableInt(Ref33e980* ref, const void* variableName, void* param2, double* result);
};
