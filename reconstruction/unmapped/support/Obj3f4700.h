// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f4700::Function3f4700, treated as adapted: shaped like a list append in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:2930
// SPDX-License-Identifier: CC0-1.0
// Obj3f4700, Obj3f4700::Node, Obj3f4700::Function3f4700, Obj3f4700::head: GUESS(low)
#pragma once

#include <cstdint>

class Obj3f4700
{
public:
    struct Node
    {
        std::uint8_t unk00[0x40];  // 0x00
        Node* next;                // 0x40
    };

    void Function3f4700(Node* node);  // compared: 0x3f4700

    Node* head;  // 0x00
};
