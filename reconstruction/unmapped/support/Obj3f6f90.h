// Source exposure: mixed (pinned image listing; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f6f90::Function3f6f90, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3f6f90, Obj3f6f90::Node, Obj3f6f90::Function3f6f90, Obj3f6f90::head: GUESS(low)
#pragma once

#include <cstdint>

class Obj3f6f90
{
public:
    class Node
    {
    public:
        virtual ~Node();

        std::uint64_t unk08;  // 0x08
        Node* next;           // 0x10
    };

    void Function3f6f90();  // compared: 0x3f6f90

    std::uint8_t unk00[0x28];  // 0x00
    Node* head;                // 0x28
};
