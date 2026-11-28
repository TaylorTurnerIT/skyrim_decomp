// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj3a5f30, Item3a5f30: GUESS(low)
#pragma once

#include <cstdint>

struct Item3a5f30
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual void Slot03();
    virtual void OnReplace(Item3a5f30* previous);
};

class Obj3a5f30
{
public:
    void SetItem(Item3a5f30* next);

    std::uint8_t unk00[0x58];
    Item3a5f30* current;
};
