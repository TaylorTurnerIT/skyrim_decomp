// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x329df0 Obj329df0::FindOrAllocate
// Adapted bodies: none
#include "Obj329df0.h"

// Finds an existing slot for id or claims the first empty slot in the 8-entry table.
bool Obj329df0::FindOrAllocate(std::uint32_t id, Slot329df0** outSlot)
{
    bool found = false;
    *outSlot = nullptr;
    std::int32_t freeIndex = -1;
    for (std::uint32_t i = 0; i < 8 && *outSlot == nullptr; ++i) {
        std::uint32_t slotId = g_slots329df0[i].id;
        if (freeIndex < 0 && slotId == 0) {
            freeIndex = static_cast<std::int32_t>(i);
        } else if (slotId == id) {
            *outSlot = &g_slots329df0[i];
            found = true;
        }
    }
    if (*outSlot == nullptr && freeIndex >= 0) {
        *outSlot = &g_slots329df0[freeIndex];
        g_slots329df0[freeIndex].id = id;
    }
    return found;
}
