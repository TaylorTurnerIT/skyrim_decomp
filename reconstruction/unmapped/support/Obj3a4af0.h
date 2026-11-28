// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj3a4af0, Source3a4af0, Target3a4af0: GUESS(low)
#pragma once

#include <cstdint>

struct Source3a4af0
{
    std::uint32_t GetIndex();
};

struct Target3a4af0
{
    void* Lookup(std::uint32_t slot, std::uint32_t index);
};

class Obj3a4af0
{
public:
    void* Resolve();

    std::uint8_t unk00[0x20];
    Source3a4af0* source;
    std::uint64_t unk28;
    Target3a4af0* target;
};
