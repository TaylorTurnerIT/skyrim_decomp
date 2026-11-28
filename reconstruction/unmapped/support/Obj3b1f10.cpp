// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b1f10 Obj3b1f10::Function3b1f10
// Adapted bodies: none
#include "Obj3b1f10.h"

// Returns the indexed float value when in range and not NaN, otherwise 0.0f.
float Obj3b1f10::Function3b1f10(std::int32_t index) const
{
    if (index >= 0 && static_cast<std::uint32_t>(index) < count && values != nullptr) {
        if (!_isnan(values[index])) {
            return values[index];
        }
    }
    return 0.0f;
}
