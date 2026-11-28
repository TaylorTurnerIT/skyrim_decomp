// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3cf9e0 Obj3cf9e0::Function3cf9e0
// Adapted bodies: none
#include "Obj3cf9e0.h"

// Bubble-sorts the singly linked list entries in ascending order of item->key.
void Obj3cf9e0::Function3cf9e0()
{
    std::int32_t count = 0;
    for (ListNode* node = &entries; node != nullptr; node = node->next) {
        if (node->item != nullptr) {
            ++count;
        }
    }
    for (std::int32_t pass = 0; pass < count - 1; ++pass) {
        for (ListNode* node = &entries; node != nullptr; node = node->next) {
            if (node->item == nullptr) {
                break;
            }
            if (node->next != nullptr && node->next->item != nullptr) {
                if (node->item->key > node->next->item->key) {
                    Item* tmp = node->item;
                    node->item = node->next->item;
                    node->next->item = tmp;
                }
            }
        }
    }
}
