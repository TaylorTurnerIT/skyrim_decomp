// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3e6c80 Obj3e6c80::Function3e6c80
// Adapted bodies: none
#include "Obj3e6c80.h"

// Checks whether target is present in slots[index]->listC0.
bool Obj3e6c80::Function3e6c80(std::int32_t index, void* target) const
{
    bool found = false;
    Slot* slot = slots[index];
    if (slot != nullptr) {
        PtrArray* arr = slot->listC0;
        if (arr != nullptr) {
            std::uint32_t pos = 0xFFFFFFFFu;
            for (std::uint32_t i = 0; i < arr->size && pos == 0xFFFFFFFFu; ++i) {
                if (arr->data[i] == target) {
                    pos = i;
                }
            }
            if (pos < 0xFFFFFFFFu) {
                found = true;
            }
        }
    }
    return found;
}
