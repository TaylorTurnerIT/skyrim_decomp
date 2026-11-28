// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3ae800, Obj3ae800::Function3ae800, Obj3ae800::tag, Obj3ae800::value64, Obj3ae800::value32: GUESS(low)
#pragma once

#include <cstdint>

class Obj3ae800
{
public:
    bool Function3ae800(const Obj3ae800& other) const;  // compared: 0x3ae800

    std::uint32_t tag;    // 0x00
    std::uint32_t unk04;  // 0x04
    union
    {
        std::uint64_t value64;  // 0x08
        std::uint32_t value32;  // 0x08
    };
};
