// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3fb230, Obj3fb230::Target, Obj3fb230::Item, Obj3fb230::Function3fb230, Obj3fb230::items, Obj3fb230::count: GUESS(low)
#pragma once

#include <cstdint>

class Obj3fb230
{
public:
    struct Target
    {
        std::uint8_t unk00[0x430];  // 0x000
        void* value430;             // 0x430
    };

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
        virtual Target* GetTarget();  // 0x138
    };

    void* Function3fb230() const;  // compared: 0x3fb230

    std::uint8_t unk00[0xE0];  // 0x00
    Item** items;              // 0xE0
    std::uint32_t unkE8;       // 0xE8
    std::uint16_t count;       // 0xEC
};
