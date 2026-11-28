// Source exposure: mixed (pinned image listing; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj4079c0::ClearNodes, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj4079c0, Node4079c0, ClearNodes, next, head, unk00, unk08: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class Node4079c0
{
public:
    virtual ~Node4079c0() = default;

    std::uint64_t unk08;
    Node4079c0* next;
};

class Obj4079c0
{
public:
    void ClearNodes();  // compared: 0x4079c0

    std::uint8_t unk00[0x30];
    Node4079c0* head;
};
