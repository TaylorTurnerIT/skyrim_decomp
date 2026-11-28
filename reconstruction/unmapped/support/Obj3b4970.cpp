// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b4970 Obj3b4970::Function3b4970
// Adapted bodies: none
#include "Obj3b4970.h"

// Returns the non-empty string at the given list index, or nullptr if absent or empty.
const char* Obj3b4970::Function3b4970(std::uint32_t index) const
{
    std::uint32_t current = 0;
    const Entry* found = nullptr;
    const ListNode* node = &entries;
    while (node != nullptr && (node->next != nullptr || node->item != nullptr) && found == nullptr) {
        if (current == index) {
            found = node->item;
        }
        ++current;
        node = node->next;
    }
    if (found != nullptr && found->text.GetLength() != 0) {
        return found->text.data;
    }
    return nullptr;
}
