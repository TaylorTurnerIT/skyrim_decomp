// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj330690::GetStartingAngle, treated as adapted: shaped like Script_GetStartingAngleConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:15046
// SPDX-License-Identifier: CC0-1.0
// Obj330690, Vec3_330690, Ref330690: GUESS(low); PDB lists GameFunc__native::GetStartingAngle_1402D4950
// Obj330690::GetStartingAngle: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct Vec3_330690
{
    float x;
    float y;
    float z;
};

struct Ref330690
{
    virtual void Slot000();
    virtual void Slot001();
    virtual void Slot002();
    virtual void Slot003();
    virtual void Slot004();
    virtual void Slot005();
    virtual void Slot006();
    virtual void Slot007();
    virtual void Slot008();
    virtual void Slot009();
    virtual void Slot00a();
    virtual void Slot00b();
    virtual void Slot00c();
    virtual void Slot00d();
    virtual void Slot00e();
    virtual void Slot00f();
    virtual void Slot010();
    virtual void Slot011();
    virtual void Slot012();
    virtual void Slot013();
    virtual void Slot014();
    virtual void Slot015();
    virtual void Slot016();
    virtual void Slot017();
    virtual void Slot018();
    virtual void Slot019();
    virtual void Slot01a();
    virtual void Slot01b();
    virtual void Slot01c();
    virtual void Slot01d();
    virtual void Slot01e();
    virtual void Slot01f();
    virtual void Slot020();
    virtual void Slot021();
    virtual void Slot022();
    virtual void Slot023();
    virtual void Slot024();
    virtual void Slot025();
    virtual void Slot026();
    virtual void Slot027();
    virtual void Slot028();
    virtual void Slot029();
    virtual void Slot02a();
    virtual void Slot02b();
    virtual void Slot02c();
    virtual void Slot02d();
    virtual void Slot02e();
    virtual void Slot02f();
    virtual void Slot030();
    virtual void Slot031();
    virtual void Slot032();
    virtual void Slot033();
    virtual void Slot034();
    virtual void Slot035();
    virtual void Slot036();
    virtual void Slot037();
    virtual void Slot038();
    virtual void Slot039();
    virtual void Slot03a();
    virtual void Slot03b();
    virtual void Slot03c();
    virtual void Slot03d();
    virtual void Slot03e();
    virtual void Slot03f();
    virtual void Slot040();
    virtual void Slot041();
    virtual void Slot042();
    virtual void Slot043();
    virtual void Slot044();
    virtual void Slot045();
    virtual void Slot046();
    virtual void Slot047();
    virtual void Slot048();
    virtual void Slot049();
    virtual void Slot04a();
    virtual void Slot04b();
    virtual void Slot04c();
    virtual void Slot04d();
    virtual void Slot04e();
    virtual void Slot04f();
    virtual void Slot050();
    virtual void Slot051();
    virtual void GetStartingAngle(Vec3_330690* outAngle);
};

class Obj330690
{
public:
    static bool GetStartingAngle(Ref330690* ref, std::uintptr_t axis, void* param2, double* result);
};
