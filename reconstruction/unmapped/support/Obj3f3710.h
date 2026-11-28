// Source exposure: mixed (pinned image listing; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f3710::Function3f3710, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3f3710, Obj3f3710::Node, Obj3f3710::Function3f3710, g_head3f3710: GUESS(low)
#pragma once

#include <cstdint>

class Obj3f3710
{
public:
    class Node
    {
    public:
        ~Node();

        std::uint8_t unk00[0x40];  // 0x00
        Node* next;                // 0x40
    };

    static void Function3f3710();  // compared: 0x3f3710
};

extern Obj3f3710::Node* g_head3f3710;
