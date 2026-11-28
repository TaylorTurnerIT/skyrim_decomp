// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3a8bb0, Obj3a8bb0::Action, Obj3a8bb0::ActionArray, Obj3a8bb0::Function3a8bb0, Obj3a8bb0::actions: GUESS(low)
#pragma once

#include <cstdint>

class Obj3a8bb0
{
public:
    class Action
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void Unk_02();
        virtual void Unk_03();
        virtual void Unk_04();
        virtual void Unk_05();
        virtual void Unk_06();
        virtual void Unk_07();
        virtual bool Unk_08(Obj3a8bb0* owner, void* arg1, void* arg2);

        std::uint8_t unk08[0x0C];  // 0x08
        std::uint8_t flags;        // 0x14
    };

    struct ActionArray
    {
        Action** data;             // 0x00
        std::uint32_t capacity;    // 0x08
        std::uint32_t unk0C;       // 0x0C
        std::uint32_t size;        // 0x10
        std::uint32_t unk14;       // 0x14
    };

    bool Function3a8bb0(void* arg1, void* arg2);  // compared: 0x3a8bb0

    std::uint8_t unk00[0x80];      // 0x00
    ActionArray actions;           // 0x80
};
