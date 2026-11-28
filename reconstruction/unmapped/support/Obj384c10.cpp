// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr384c10::~SmartPtr384c10 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Cookbook: 0x384c10 14
// Cookbook: 0x384c10 39
// 0x384c10 Obj384c10::~Obj384c10
#include "Obj384c10.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
Obj384c10::Obj384c10() = default;
