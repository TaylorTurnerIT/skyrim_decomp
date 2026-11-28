// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: MapBase38c3f0::~MapBase38c3f0 (inline helper), treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Cookbook: 0x38c3f0 14
// 0x38c3f0 Obj38c3f0::~Obj38c3f0
#include "Obj38c3f0.h"

// PDB prototype: void (hkpWorldExtension*), which does not fit a deleting destructor.
// Note: CrashLogger PDB lists an AutoRegisterCreator::Func1 name here, which disagrees with this deleting destructor.
// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
Obj38c3f0::Obj38c3f0() = default;
