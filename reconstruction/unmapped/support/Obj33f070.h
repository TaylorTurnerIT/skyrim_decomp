// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj33f070, AttackData33f070, AttackPtr33f070, Ref33f070, Actor33f070: GUESS(low); PDB lists GameFunc::native::IsAttackType
// Obj33f070::IsAttackType: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct AttackData33f070
{
    std::uint8_t unk00[0x38];
    void* attackTypeKeyword;
};

struct AttackPtr33f070
{
    AttackData33f070* ptr;
};

struct Ref33f070
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor33f070 : Ref33f070
{
    const AttackPtr33f070& GetAttackData();
};

class Obj33f070
{
public:
    static bool IsAttackType(Ref33f070* ref, void* keyword, void* param2, double* result);
};
