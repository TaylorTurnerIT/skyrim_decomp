// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3d58d0 Obj3d58d0::Function3d58d0
// Adapted bodies: none
#include "Obj3d58d0.h"

// Clears all occupied entries in the global scatter table and resets its free-slot counters.
void Obj3d58d0::Function3d58d0()
{
    Entry* cursor = gTable209cc50;
    if (cursor != nullptr) {
        std::uint32_t remaining = gCapacity209cc34;
        while (remaining != 0) {
            --remaining;
            if (cursor->next != nullptr) {
                cursor->Release(&cursor->value);
                cursor->next = nullptr;
            }
            ++cursor;
        }
    } else {
        gCapacity209cc34 = 0;
    }
    std::uint32_t cap = gCapacity209cc34;
    gFreeCount209cc38 = cap;
    gFreeIndex209cc3c = cap;
}
