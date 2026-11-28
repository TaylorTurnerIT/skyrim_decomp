// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f7a10::Derived::~Derived, treated as adapted: shaped like TESCondition::~TESCondition (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/T/TESCondition.cpp:58, MIT); TESResponseList::ResponseListWrapper_ClearResponseList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesresponse.cpp:246
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Cookbook: 0x3f7a10 14
// 0x3f7a10 Obj3f7a10::Derived::~Derived
// CI hash: 0x3f7a10 ??_GDerived@Obj3f7a10@@UEAAPEAXI@Z
#include "Obj3f7a10.h"

// PDB prototype: void (BSParticleShaderProperty*), which does not fit a deleting destructor.
// PDB: the CrashLogger PDB name here is ZoneEntry::dtor_deleting; the stand-in name is kept.
// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
Obj3f7a10::Derived::Derived()
{
}
