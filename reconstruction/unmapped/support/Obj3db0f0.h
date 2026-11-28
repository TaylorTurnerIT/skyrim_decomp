// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3db0f0::Function3db0f0, treated as adapted: shaped like BSTArray::erase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:525, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3db0f0, Obj3db0f0::Entry, Obj3db0f0::ArrayAllocator, Obj3db0f0::ArrayBase, Obj3db0f0::EntryArray, Obj3db0f0::Function3db0f0, Obj3db0f0::entries: GUESS(low)
#pragma once

#include <cstdint>

class Obj3db0f0
{
public:
    class Entry
    {
    public:
        virtual ~Entry();
    };

    struct ArrayAllocator
    {
        Entry** data;            // 0x00
        std::uint32_t capacity;  // 0x08
    };

    class ArrayBase
    {
    public:
        void MoveElements(void* buffer, std::uint32_t dstIndex, std::uint32_t srcIndex,
                          std::uint32_t count, std::uint32_t elementSize);

        std::uint32_t size;  // 0x00
    };

    class EntryArray : public ArrayAllocator, public ArrayBase
    {
    };

    void Function3db0f0();  // compared: 0x3db0f0

    std::uint8_t unk00[0x58];  // 0x00
    EntryArray entries;        // 0x58
};
