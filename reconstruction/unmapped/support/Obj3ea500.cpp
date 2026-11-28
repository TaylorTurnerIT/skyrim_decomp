// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3ea500 Obj3ea500::Function3ea500
// Adapted bodies: none
#include "Obj3ea500.h"

// Counts set bits in rows[category] up to the category's bit limit.
std::uint32_t Obj3ea500::Function3ea500(std::int32_t category) const
{
    std::uint32_t setCount = 0;
    std::uint32_t count = GetCategoryCount(category);
    for (std::uint32_t i = 0; i < count; ++i) {
        std::uint32_t word = i / 32;
        if ((rows[category][word] & (1u << (i - word * 32))) > 0) {
            ++setCount;
        }
    }
    return setCount;
}
