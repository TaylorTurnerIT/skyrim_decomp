// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3db240::Function3db240, treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3db240, Obj3db240::HeapAllocator, Obj3db240::ArrayBase, Obj3db240::PtrArray, Obj3db240::State, Obj3db240::Function3db240: GUESS(low)
#pragma once

#include <cstdint>

class Obj3db240
{
public:
    class HeapAllocator
    {
    public:
        ~HeapAllocator();
        void Deallocate();

        void** data;             // 0x00
        std::uint32_t capacity;  // 0x08
    };

    class ArrayBase
    {
    public:
        ~ArrayBase();

        std::uint32_t size;  // 0x00
    };

    class PtrArray : public HeapAllocator, public ArrayBase
    {
    public:
        ~PtrArray()
        {
            if (data != nullptr) {
                Deallocate();
                size = 0;
            }
        }
    };

    struct State
    {
        std::uint8_t unk00[0x38];  // 0x00
        std::int32_t level;        // 0x38
    };

    std::int32_t Function3db240(const State* state, PtrArray* arr);  // compared: 0x3db240
};
