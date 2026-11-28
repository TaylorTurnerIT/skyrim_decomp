// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj34c750, Factory34c750: GUESS(low); PDB lists `anonymous_namespace'::FindObjectTypeHelper::VisitFactory
// Obj34c750::VisitFactory: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

extern "C" __declspec(dllimport) int _stricmp(const char* lhs, const char* rhs);

struct Factory34c750
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual std::uint32_t GetType();
    virtual const char* GetName();
};

class Obj34c750
{
public:
    std::uint32_t VisitFactory(Factory34c750* factory);

    std::uint64_t unk00;
    const char* targetName;
    std::uint32_t foundType;
};
