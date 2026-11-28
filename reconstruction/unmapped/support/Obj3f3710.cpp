// Source exposure: mixed (pinned image listing; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f3710::Function3f3710, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x3f3710 Obj3f3710::Function3f3710
#include "Obj3f3710.h"

// Deletes all nodes in the global singly linked list and clears the head pointer.
void Obj3f3710::Function3f3710()
{
    Node* cur = g_head3f3710;
    while (cur != nullptr) {
        Node* next = cur->next;
        delete cur;
        cur = next;
    }
    g_head3f3710 = nullptr;
}
