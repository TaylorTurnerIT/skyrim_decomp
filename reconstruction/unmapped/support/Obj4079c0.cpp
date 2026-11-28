// Source exposure: mixed (pinned image listing; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj4079c0::ClearNodes, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x4079c0 Obj4079c0::ClearNodes
#include "Obj4079c0.h"

// Deletes every node in the singly-linked list and clears the head pointer.
void Obj4079c0::ClearNodes()
{
    Node4079c0* node = head;
    while (node) {
        Node4079c0* next = node->next;
        delete node;
        node = next;
    }
    head = nullptr;
}
