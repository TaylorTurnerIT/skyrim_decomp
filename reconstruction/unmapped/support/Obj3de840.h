// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3de840::Array::~Array (inline helper), treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3de840, Obj3de840::HeapAllocator, Obj3de840::ArrayBase, Obj3de840::Array, Obj3de840::first, Obj3de840::second: GUESS(low)
#pragma once

#include <cstdint>

class Obj3de840
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

    ~Obj3de840();  // compared: 0x3de840

    std::uint8_t unk00[0x68];  // 0x00
    Array first;               // 0x68
    Array second;              // 0x80
};
