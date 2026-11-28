// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3fcbb0 Obj3fcbb0::Function3fcbb0
// Adapted bodies: none
#include "Obj3fcbb0.h"

// Returns a pointer into data scaled by slots[0]->count * index when slots[index]->count > 0.
std::uint32_t* Obj3fcbb0::Function3fcbb0(std::int32_t index) const
{
    if (slots[index]->count > 0) {
        std::int32_t stride = slots[0]->count;
        return &data[stride * index];
    }
    return nullptr;
}
