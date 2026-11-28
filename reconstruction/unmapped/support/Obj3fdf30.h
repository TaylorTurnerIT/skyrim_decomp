// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3fdf30, Obj3fdf30::Stream, Obj3fdf30::Function3fdf30, Obj3fdf30::stream: GUESS(low)
#pragma once

#include <cstdint>

class Obj3fdf30
{
public:
    class Stream
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void Unk_02();
        virtual void Unk_03();
        virtual void Unk_04();
        virtual void Unk_05();
        virtual void Flush();  // 0x30
    };

    std::int32_t Function3fdf30();  // compared: 0x3fdf30

    std::uint8_t unk00[0x10];  // 0x00
    Stream* stream;            // 0x10
};
