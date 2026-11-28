// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj33e9e0, AnimGraphHolder33e9e0, Ref33e9e0: GUESS(low); PDB lists GameFunc__native::GetGraphVariableFloat_1402E2400
// Obj33e9e0::GetGraphVariableFloat: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct AnimGraphHolder33e9e0
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
    virtual bool GetGraphVariableFloat(const void* variableName, float& outValue);
};

struct Ref33e9e0
{
    std::uint8_t unk00[0x38];
    AnimGraphHolder33e9e0 animGraph;
};

class Obj33e9e0
{
public:
    static bool GetGraphVariableFloat(Ref33e9e0* ref, const void* variableName, void* param2, double* result);
};
