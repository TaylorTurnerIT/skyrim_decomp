// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3ea500, Obj3ea500::GetCategoryCount, Obj3ea500::Function3ea500, Obj3ea500::rows: GUESS(low)
#pragma once

#include <cstdint>

class Obj3ea500
{
public:
    static std::uint32_t GetCategoryCount(std::int32_t category);

    std::uint32_t Function3ea500(std::int32_t category) const;  // compared: 0x3ea500

    // Four morph categories of eight 32-bit flag words (128 bytes total, matching FaceRelatedData).
    std::uint32_t rows[4][8];  // 0x00
};
