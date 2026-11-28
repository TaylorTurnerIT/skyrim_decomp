// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f4700::Function3f4700, treated as adapted: shaped like a list append in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:2930
// SPDX-License-Identifier: CC0-1.0
// 0x3f4700 Obj3f4700::Function3f4700
#include "Obj3f4700.h"

// Appends node to the tail of the singly linked list rooted at head.
void Obj3f4700::Function3f4700(Node* node)
{
    Node* cur = head;
    if (cur == nullptr) {
        head = node;
        return;
    }
    while (cur->next != nullptr) {
        cur = cur->next;
    }
    cur->next = node;
}
