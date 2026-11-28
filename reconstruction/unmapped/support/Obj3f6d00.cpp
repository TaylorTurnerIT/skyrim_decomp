// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f6d00::Derived::~Derived, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x3f6d00 Obj3f6d00::Derived::~Derived
#include "Obj3f6d00.h"

// PDB: the CrashLogger PDB name here is ZoneEntry::~ZoneEntry; the stand-in name is kept.
// Deletes all linked nodes rooted at head and clears the list pointer.
Obj3f6d00::Derived::~Derived()
{
    Node* cur = head;
    while (cur != nullptr) {
        Node* next = cur->next;
        delete cur;
        cur = next;
    }
    head = nullptr;
}
