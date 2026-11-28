// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3d58d0, Obj3d58d0::Entry, Obj3d58d0::Function3d58d0, gTable209cc50, gCapacity209cc34, gFreeCount209cc38, gFreeIndex209cc3c: GUESS(low)
#pragma once

#include <cstdint>

class Obj3d58d0
{
public:
    class Entry
    {
    public:
        void Release(void* payload);

        std::uint32_t key;    // 0x00
        std::uint32_t value;  // 0x04
        Entry* next;          // 0x08
    };

    static void Function3d58d0();  // compared: 0x3d58d0
};

extern Obj3d58d0::Entry* gTable209cc50;
extern std::uint32_t gCapacity209cc34;
extern std::uint32_t gFreeCount209cc38;
extern std::uint32_t gFreeIndex209cc3c;
