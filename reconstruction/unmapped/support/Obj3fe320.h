// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3fe320, Obj3fe320::Allocator, Obj3fe320::Router, Obj3fe320::Function3fe320, g_tlsSlot3fe320: GUESS(low)
#pragma once

#include <cstddef>
#include <cstdint>

class Obj3fe320
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

    static void Function3fe320(void* ptr, std::size_t fallbackSize) noexcept;  // compared: 0x3fe320

    std::uint64_t unk00;            // 0x00
    std::uint16_t memSizeAndFlags;  // 0x08
};

extern std::uint32_t g_tlsSlot3fe320;
