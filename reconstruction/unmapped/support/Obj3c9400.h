// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3c9400, Obj3c9400::NameComponent, Obj3c9400::Entry, Obj3c9400::Function3c9400: GUESS(low)
#pragma once

#include <cstdint>

extern "C" int __cdecl strcmp(const char* lhs, const char* rhs);

class Obj3c9400
{
public:
    class NameComponent
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void Unk_02();
        virtual void Unk_03();
        virtual void Unk_04();
        virtual const char* GetName();
    };

    struct Entry
    {
        std::uint8_t unk00[0xD8];  // 0x00
        NameComponent nameComp;    // 0xD8
    };

    static int Function3c9400(Entry** lhs, Entry** rhs);  // compared: 0x3c9400
};
