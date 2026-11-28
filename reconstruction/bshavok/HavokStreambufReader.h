// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// HavokStreambufReader, HavokStreambufReader::dtor: CRASHLOGGER_PDB(59818@2026.10.24)
// hkMemoryAllocator, hkMemoryAllocator::BlockFree: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// hkMemoryRouter, g_hkMemoryRouterTlsSlot, TlsGetValue, memSizeAndFlags, unk0a, unk0c, allocator58: GUESS(low) STANDIN
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

class HavokStreambufReader
{
public:
    HavokStreambufReader();
    virtual ~HavokStreambufReader();  // compared: 0x3fe740

    static void operator delete(void* a_ptr, std::size_t a_size)
    {
        auto* obj = static_cast<HavokStreambufReader*>(a_ptr);
        std::uint16_t memSize = obj->memSizeAndFlags;
        std::int32_t size = (memSize == 0xFFFFu) ? static_cast<std::int32_t>(a_size) : static_cast<std::int32_t>(memSize);
        auto* router = static_cast<hkMemoryRouter*>(TlsGetValue(g_hkMemoryRouterTlsSlot));
        router->allocator58->BlockFree(a_ptr, size);
    }

    std::uint16_t memSizeAndFlags;
    std::uint16_t unk0a;
    std::uint32_t unk0c;
};
static_assert(sizeof(HavokStreambufReader) == 0x10, "HavokStreambufReader size");
