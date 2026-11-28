// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3e09e0::Array::Clear (inline helper), treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3e09e0, Obj3e09e0::HeapAllocator, Obj3e09e0::ArrayBase, Obj3e09e0::Array, Obj3e09e0::Function3e09e0, Obj3e09e0::first, Obj3e09e0::second, Obj3e09e0::flagA0, Obj3e09e0::flagA1, Obj3e09e0::flagA2, Obj3e09e0::flagA3: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e09e0
{
public:
    class HeapAllocator
    {
    public:
        void Deallocate();

        void* data;              // 0x00
        std::uint32_t capacity;  // 0x08
    };

    class ArrayBase
    {
    public:
        std::uint32_t size;  // 0x00
    };

    class Array : public HeapAllocator, public ArrayBase
    {
    public:
        void Clear()
        {
            if (data != nullptr) {
                Deallocate();
                size = 0;
            }
        }
    };

    void Function3e09e0();  // compared: 0x3e09e0

    std::uint8_t unk00[0x68];  // 0x00
    Array first;               // 0x68
    Array second;              // 0x80
    std::uint8_t unk98[0x08];  // 0x98
    bool flagA0;               // 0xA0
    bool flagA1;               // 0xA1
    bool flagA2;               // 0xA2
    bool flagA3;               // 0xA3
};
