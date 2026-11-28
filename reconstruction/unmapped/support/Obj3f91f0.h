// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3f91f0, Obj3f91f0::Allocator, Obj3f91f0::Router, Obj3f91f0::Function3f91f0, g_tlsSlot3f91f0: GUESS(low)
#pragma once

#include <cstddef>
#include <cstdint>

class Obj3f91f0
{
public:
    class Allocator
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void BlockFree(void* ptr, std::int32_t size);
    };

    struct Router
    {
        std::uint8_t unk00[0x58];  // 0x00
        Allocator* heap;           // 0x58
    };

    static void Function3f91f0(void* ptr, std::size_t fallbackSize) noexcept;  // compared: 0x3f91f0

    std::uint64_t unk00;            // 0x00
    std::uint16_t memSizeAndFlags;  // 0x08
};

extern std::uint32_t g_tlsSlot3f91f0;
