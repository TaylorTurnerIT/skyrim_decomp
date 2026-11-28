// Source exposure: mixed (pinned image listing; community source).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// hkMemoryAllocator, hkMemoryAllocator::BlockFree: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// Obj404410, hkMemoryRouter, g_hkMemoryRouterTlsSlot, TlsGetValue, allocator58, unk08: GUESS(low) STANDIN
#pragma once

#include <cstddef>
#include <cstdint>

extern "C" __declspec(dllimport) void* __stdcall TlsGetValue(unsigned long a_index);

class hkMemoryAllocator
{
public:
    virtual void Slot00() = 0;
    virtual void Slot01() = 0;
    virtual void BlockFree(void* a_ptr, std::int32_t a_size) = 0;
};

struct hkMemoryRouter
{
    std::uint8_t unk00[0x58];
    hkMemoryAllocator* allocator58;
};

extern std::uint32_t g_hkMemoryRouterTlsSlot;

class Obj404410
{
public:
    Obj404410();
    virtual ~Obj404410();  // compared: 0x404410

    static void operator delete(void* a_ptr, std::size_t a_size)
    {
        auto* router = static_cast<hkMemoryRouter*>(TlsGetValue(g_hkMemoryRouterTlsSlot));
        router->allocator58->BlockFree(a_ptr, static_cast<std::int32_t>(a_size));
    }

    std::uint8_t unk08[0x68];
};
static_assert(sizeof(Obj404410) == 0x70, "Obj404410 size");
