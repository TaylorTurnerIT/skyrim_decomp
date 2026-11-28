// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3f0690, Obj3f0690::Item, Obj3f0690::Function3f0690: GUESS(low)
#pragma once

#include <cstdint>

class Obj3f0690
{
public:
    class Item
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
        virtual void Unk_08();
        virtual void Unk_09();
        virtual void Unk_0A();
        virtual void Unk_0B();
        virtual void Unk_0C();
        virtual void Unk_0D();
        virtual void Unk_0E();
        virtual void Unk_0F();
        virtual void Unk_10();
        virtual void Unk_11();
        virtual void Unk_12();
        virtual void Unk_13();
        virtual void Unk_14();
        virtual void Unk_15();
        virtual void Unk_16();
        virtual void Unk_17();
        virtual void Unk_18();
        virtual void Unk_19();
        virtual void Unk_1A();
        virtual void Unk_1B();
        virtual void Unk_1C();
        virtual void Unk_1D();
        virtual void Unk_1E();
        virtual void Unk_1F();
        virtual void Unk_20();
        virtual void Unk_21();
        virtual void Unk_22();
        virtual void Unk_23();
        virtual void Unk_24();
        virtual void Unk_25();
        virtual void Unk_26();
        virtual void Unk_27();
        virtual void Unk_28();
        virtual void Unk_29();
        virtual void Unk_2A();
        virtual void Unk_2B();
        virtual void Unk_2C();
        virtual void Unk_2D();
        virtual void Unk_2E();
        virtual void Unk_2F();
        virtual void Unk_30();
        virtual void Unk_31();
        virtual const char* GetName();  // 0x190

        std::uint8_t unk08[0x2F];  // 0x08
        std::uint8_t priority;     // 0x37
    };

    static int Function3f0690(Item* lhs, Item* rhs);  // compared: 0x3f0690
};
