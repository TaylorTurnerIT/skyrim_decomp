// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj38d170, Entry38d170, Dispatch38d170: GUESS(low); PDB lists HandleEntryPointVisitor::`anonymous_namespace'::HandleEntryPointVisitor::Func1
#pragma once

#include <cstdint>

struct Entry38d170
{
    virtual bool Check(std::uint32_t flag, void* context);
    virtual std::uint8_t GetKind();
    virtual void* GetPayload();
};

void Dispatch38d170(std::uint32_t kind, void* arg2, std::uint32_t arg3, std::uint32_t arg4, void* arg5, void* payload);

class Obj38d170
{
public:
    std::uint32_t Visit(Entry38d170* entry);

    std::uint64_t unk00;
    std::uint32_t unk08;
    std::uint32_t unk0c;
    void* context;
    void* unk18;
    void* unk20;
    std::uint8_t flag28;
    std::uint8_t flag29;
};
