// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b8780 Obj3b8780::Function3b8780
// Adapted bodies: none
#include "Obj3b8780.h"

// Checks whether target appears in list.
bool Obj3b8780::Function3b8780(void* target, const EntryList* list)
{
    bool found = false;
    if (target != nullptr && list != nullptr) {
        std::uint32_t count = list->count;
        for (std::uint32_t i = 0; i < count && !found; ++i) {
            if (list->GetAt(i) == target) {
                found = true;
            }
        }
    }
    return found;
}
