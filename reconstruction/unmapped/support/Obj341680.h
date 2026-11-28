// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj341680, PrimaryBase341680, SecondaryBase341680, Target341680, Holder341680: GUESS(low)
#pragma once

#include <cstdint>

struct PrimaryBase341680
{
    std::uint8_t unk00[0x30];
};

struct SecondaryBase341680
{
    std::uint64_t unk00;
};

struct Target341680 : PrimaryBase341680, SecondaryBase341680
{
};

struct Holder341680
{
    Target341680* target;
};

class Obj341680
{
public:
    SecondaryBase341680* GetSecondaryBase();

    std::uint8_t unk00[0x28];
    Holder341680* holder;
};
