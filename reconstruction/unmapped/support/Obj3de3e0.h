// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3de3e0::OuterArray::~OuterArray, treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3de3e0, Obj3de3e0::HeapAllocator, Obj3de3e0::ArrayBase, Obj3de3e0::InnerArray, Obj3de3e0::Element: GUESS(low)
#pragma once

#include <cstdint>

class Obj3de3e0
{
public:
    class HeapAllocator
    {
    public:
        ~HeapAllocator();
        void Deallocate();

        void* data;              // 0x00
        std::uint32_t capacity;  // 0x08
    };

    class ArrayBase
    {
    public:
        ~ArrayBase();

        std::uint32_t size;  // 0x00
    };

    class InnerArray : public HeapAllocator, public ArrayBase
    {
    public:
        ~InnerArray()
        {
            if (data != nullptr) {
                Deallocate();
                size = 0;
            }
        }
    };

    struct Element
    {
        std::uint64_t unk00;  // 0x00
        InnerArray inner;     // 0x08
    };

    class OuterArray : public HeapAllocator, public ArrayBase
    {
    public:
        ~OuterArray();  // compared: 0x3de3e0
    };
};
