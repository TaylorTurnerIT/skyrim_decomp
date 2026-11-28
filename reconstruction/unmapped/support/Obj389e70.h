// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj389e70, Sub389e70: GUESS(low)
#pragma once

#include <cstdint>

struct Sub389e70
{
    virtual void Slot00();
    virtual void Slot01();

    std::uint8_t unk08[0x20];
};

class Obj389e70
{
public:
    void Function389e70();

    std::uint8_t unk00[0x28];
    Sub389e70 first;
    Sub389e70 second;
};
