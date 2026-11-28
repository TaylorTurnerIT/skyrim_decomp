// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj329df0, Slot329df0, g_slots329df0: GUESS(low)
#pragma once

#include <cstdint>

struct Slot329df0
{
    std::uint64_t unk00;
    std::uint32_t id;
    std::uint8_t unk0c[0x44];
};

extern Slot329df0 g_slots329df0[8];

class Obj329df0
{
public:
    static bool FindOrAllocate(std::uint32_t id, Slot329df0** outSlot);
};
