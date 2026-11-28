// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj389ea0, Sub389ea0: GUESS(low)
#pragma once

#include <cstdint>

struct Sub389ea0
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();

    std::uint8_t unk08[0x20];
};

class Obj389ea0
{
public:
    void Function389ea0();

    std::uint8_t unk00[0x28];
    Sub389ea0 first;
    Sub389ea0 second;
};
