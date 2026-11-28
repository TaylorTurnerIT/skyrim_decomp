// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj3fb8d0, Obj3fb8d0::BaseA, Obj3fb8d0::SubBase, Obj3fb8d0::Owner, Obj3fb8d0::Child, Obj3fb8d0::Function3fb8d0, Obj3fb8d0::child: GUESS(low)
#pragma once

#include <cstdint>

class Obj3fb8d0
{
public:
    struct BaseA
    {
        std::uint8_t unk00[0x10];  // 0x00
        void* value10;             // 0x10
        std::uint64_t unk18;       // 0x18
    };

    struct SubBase
    {
        std::uint64_t unk00;  // 0x00
    };

    struct Owner : public BaseA, public SubBase
    {
    };

    class Child
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void Unk_02();
        virtual void Unk_03();
        virtual SubBase* GetSub();  // 0x20
    };

    void* Function3fb8d0() const;  // compared: 0x3fb8d0

    std::uint8_t unk00[0x10];  // 0x00
    Child* child;              // 0x10
};
