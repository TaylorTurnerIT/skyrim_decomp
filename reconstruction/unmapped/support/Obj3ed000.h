// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3ed000, Obj3ed000::FormRef, Obj3ed000::FormatBuffer, Obj3ed000::Function3ed000, Obj3ed000::index, g_fmt3ed000, g_empty3ed000: GUESS(low)
#pragma once

#include <cstddef>
#include <cstdint>

extern const char g_fmt3ed000[];
extern const char g_empty3ed000[];

class Obj3ed000
{
public:
    struct FormRef
    {
        std::uint8_t unk00[0x14];  // 0x00
        std::uint32_t formId;      // 0x14
    };

    static int FormatBuffer(char* dst, std::size_t dstSize, const char* fmt, ...);

    void Function3ed000(char* outBuf, const FormRef* form) const;  // compared: 0x3ed000

    std::uint8_t unk00[0x10];  // 0x00
    std::uint8_t index;        // 0x10
};
