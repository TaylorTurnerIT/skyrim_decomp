// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Cookbook: 0x3fe6b0 14
// 0x3fe6b0 Obj3fe6b0::dtor
#include "Obj3fe6b0.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
Obj3fe6b0::Obj3fe6b0()
{
}

// Destroys Obj3fe6b0; the PDB name and prototype void(hkpWorldExtension*) disagree with
// the observed scalar deleting destructor freeing through the TLS memory router.
Obj3fe6b0::~Obj3fe6b0()
{
}
