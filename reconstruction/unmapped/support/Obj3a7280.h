// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj3a7280: GUESS(low)
#pragma once

#include <cstdint>

class Obj3a7280
{
public:
    void SetTwoBitState(std::uint32_t key, std::uint32_t pairIndex, std::uint32_t state);

    std::uint8_t unk00[0x38];
    std::uint32_t* keys;
    std::uint64_t unk40;
    std::uint32_t keyCount;
    std::uint8_t unk4c[0x1c];
    std::uint32_t* masks;
    std::uint64_t unk70;
    std::uint32_t maskCount;
};
