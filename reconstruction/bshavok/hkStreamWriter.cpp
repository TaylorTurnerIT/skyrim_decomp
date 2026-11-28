// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Cookbook: 0x3feab0 14
// 0x3feab0 hkStreamWriter::dtor
#include "hkStreamWriter.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
hkStreamWriter::hkStreamWriter()
{
}

// Destroys hkStreamWriter; the PDB prototype lists void(IMovementControllerRegisterInterface*),
// whereas the target is a scalar deleting destructor taking flags.
hkStreamWriter::~hkStreamWriter()
{
}
