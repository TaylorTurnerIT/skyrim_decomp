// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Array39e790::~Array39e790 (inline helper), treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj39e790, ArrayBase39e790, ArrayAlloc39e790, Array39e790: GUESS(low)
#pragma once

#include <cstdint>

struct ArrayBase39e790
{
    ~ArrayBase39e790();

    std::uint32_t size;
};

struct ArrayAlloc39e790
{
    ~ArrayAlloc39e790();
    void Deallocate();

    void* data;
    std::uint32_t capacity;
    std::uint32_t unk0c;
};

struct Array39e790 : ArrayAlloc39e790, ArrayBase39e790
{
    ~Array39e790()
    {
        if (data != nullptr) {
            Deallocate();
            size = 0;
        }
    }
};

class Obj39e790
{
public:
    ~Obj39e790();

    std::uint8_t unk00[0x20];
    Array39e790 first;
    Array39e790 second;
};
