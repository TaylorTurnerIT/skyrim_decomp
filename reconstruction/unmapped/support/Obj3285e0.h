// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Array3285e0::~Array3285e0 (inline helper), treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3285e0, ArrayBase3285e0, ArrayAlloc3285e0, Array3285e0: GUESS(low)
#pragma once

#include <cstdint>

struct ArrayBase3285e0
{
    ~ArrayBase3285e0();

    std::uint32_t size;
};

struct ArrayAlloc3285e0
{
    ~ArrayAlloc3285e0();
    void Deallocate();

    void* data;
    std::uint32_t capacity;
    std::uint32_t unk0c;
};

struct Array3285e0 : ArrayAlloc3285e0, ArrayBase3285e0
{
    ~Array3285e0()
    {
        if (data != nullptr) {
            Deallocate();
            size = 0;
        }
    }
};

class Obj3285e0
{
public:
    virtual ~Obj3285e0();

    std::uint8_t unk08[0x10];
    Array3285e0 first;
    Array3285e0 second;
};
