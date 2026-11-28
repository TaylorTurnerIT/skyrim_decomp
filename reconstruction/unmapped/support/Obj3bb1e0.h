// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3bb1e0, Obj3bb1e0::Function3bb1e0, Obj3bb1e0::text, Obj3bb1e0::cachedLength: GUESS(low)
#pragma once

#include <cstddef>
#include <cstdint>

extern "C" std::size_t __cdecl strlen(const char* str);

class Obj3bb1e0
{
public:
    std::size_t Function3bb1e0() const;  // compared: 0x3bb1e0

    std::uint8_t unk00[0x108];   // 0x000
    const char* text;            // 0x108
    std::uint16_t cachedLength;  // 0x110
};
