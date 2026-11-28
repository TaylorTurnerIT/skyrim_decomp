// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3ae030, Obj3ae030::Reader, Obj3ae030::Function3ae030, Obj3ae030::flag10, Obj3ae030::flag11, Obj3ae030::flag12: GUESS(low)
#pragma once

#include <cstdint>

class Obj3ae030
{
public:
    class Reader
    {
    public:
        void ReadBytes(void* dst, std::uint32_t size, std::uint32_t count);
    };

    void Function3ae030(Reader* reader);  // compared: 0x3ae030

    std::uint8_t unk00[0x10];  // 0x00
    std::uint8_t flag10;       // 0x10
    std::uint8_t flag11;       // 0x11
    std::uint8_t flag12;       // 0x12
};
