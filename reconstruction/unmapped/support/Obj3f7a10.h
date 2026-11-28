// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f7a10::Derived::~Derived, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3f7a10, Obj3f7a10::Node, Obj3f7a10::Base, Obj3f7a10::Derived, Obj3f7a10::head: GUESS(low)
#pragma once

#include <cstdint>

class Obj3f7a10
{
public:
    class Node
    {
    public:
        virtual ~Node();

        std::uint64_t unk08;  // 0x08
        Node* next;           // 0x10
    };

    class Base
    {
    public:
        virtual ~Base()
        {
        }

        std::uint8_t unk08[0x10];  // 0x08
    };

    class Derived : public Base
    {
    public:
        Derived();
        ~Derived() override
        {
            Node* cur = head;
            while (cur != nullptr) {
                Node* next = cur->next;
                delete cur;
                cur = next;
            }
            head = nullptr;
        }

        std::uint8_t unk18[0x10];  // 0x18
        Node* head;                // 0x28
    };
};
