// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj4184a0::ClearIfTracked, treated as adapted: shaped like BSTSmartPointer::reset (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:166, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x4184a0 Obj4184a0::ClearIfTracked
#include "Obj4184a0.h"

// Releases the manager's primary or secondary slot if it points to a_target.
void Obj4184a0::ClearIfTracked(RefObj4184a0* a_target)
{
    Manager4184a0* mgr = g_manager4184a0;
    if (!mgr) {
        return;
    }
    if (mgr->primary.ptr == a_target) {
        mgr->primary.Reset();
    } else if (mgr->secondary.ptr == a_target) {
        mgr->secondary.Reset();
    }
}
