// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3c6330 Obj3c6330::Function3c6330
// Adapted bodies: none
#include "Obj3c6330.h"

// Removes matching form-type 0x29 entries absent from lookup and marks the list filtered.
void Obj3c6330::Function3c6330(Lookup* lookup)
{
    if (!filtered && lookup != nullptr) {
        for (std::uint32_t i = 0; i < count; ++i) {
            Entry* entry = items[i];
            if (entry != nullptr) {
                Form* form = entry->form;
                if (form->formType == 0x29u && (form->flags19E & 0x20u) != 0) {
                    if (lookup->Find(&form->sub210, true) == nullptr) {
                        // NOTE: original advances the outer index without rechecking the shifted slot.
                        for (std::uint32_t j = i; j < count - 1; ++j) {
                            items[j] = items[j + 1];
                        }
                        count = count - 1;
                    }
                }
            }
        }
        filtered = true;
    }
}
