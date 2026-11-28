// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x33ede0 Obj33ede0::Function33ede0
// Adapted bodies: none
#include "Obj33ede0.h"

// Queries the player's entry at offset 0xba8 and stores 1.0 if a matching object exists, else 0.0.
bool Obj33ede0::Function33ede0(void*, void*, void*, double* result)
{
    *result = 0.0;
    Entry33ede0* entry = g_player33ede0->entry;
    if (entry != nullptr) {
        void* second = (entry->secondary != nullptr) ? entry->secondary->value : nullptr;
        *result = (Query33ede0(entry->primary, second) != nullptr) ? 1.0 : 0.0;
    }
    return true;
}
