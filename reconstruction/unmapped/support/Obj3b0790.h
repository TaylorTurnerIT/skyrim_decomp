// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3b0790, Obj3b0790::SubObject, Obj3b0790::Target, Obj3b0790::Function3b0790, Obj3b0790::expected, Obj3b0790::flag18: GUESS(low)
#pragma once

#include <cstdint>

class Obj3b0790
{
public:
    class SubObject
    {
    public:
        void Notify(bool value);
    };

    struct Target
    {
        std::uint8_t unk00[0x40];  // 0x00
        void* field40;             // 0x40
        std::uint8_t unk48[0xB0];  // 0x48
        SubObject* subF8;          // 0xF8
    };

    void Function3b0790(Target* target);  // compared: 0x3b0790

    std::uint8_t unk00[0x10];  // 0x00
    void* expected;            // 0x10
    bool flag18;               // 0x18
};
