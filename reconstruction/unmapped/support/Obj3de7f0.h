// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3de7f0::Array::~Array (inline helper), treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3de7f0, Obj3de7f0::HeapAllocator, Obj3de7f0::ArrayBase, Obj3de7f0::Array, Obj3de7f0::items: GUESS(low)
#pragma once

#include <cstdint>

class Obj3de7f0
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

    class Array : public HeapAllocator, public ArrayBase
    {
    public:
        ~Array()
        {
            if (data != nullptr) {
                Deallocate();
                size = 0;
            }
        }
    };

    ~Obj3de7f0();  // compared: 0x3de7f0

    std::uint64_t unk00;  // 0x00
    Array items;          // 0x08
};
