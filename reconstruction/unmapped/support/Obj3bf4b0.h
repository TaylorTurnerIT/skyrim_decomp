// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3bf4b0, Obj3bf4b0::Entry, Obj3bf4b0::Function3bf4b0, FormatString3bf4b0, gFmt185f2a8, gFmt185f408, gTable209c860: GUESS(low)
#pragma once

#include <cstddef>
#include <cstdint>

int FormatString3bf4b0(char* buffer, std::size_t bufferSize, const char* fmt, ...);

class Obj3bf4b0
{
public:
    struct Entry
    {
        const char* name;     // 0x00
        std::uint64_t unk08;  // 0x08
    };

    static void Function3bf4b0(char* buffer, std::uint32_t bufferSize, std::int32_t index,
                               std::uint32_t value, bool allowDefault);  // compared: 0x3bf4b0
};

extern const char gFmt185f2a8[];
extern const char gFmt185f408[];
extern Obj3bf4b0::Entry gTable209c860[];
