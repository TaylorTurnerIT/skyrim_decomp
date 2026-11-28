// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Cookbook: 0x3fe990 14
// 0x3fe990 hkNativeFileSystem::dtor
#include "hkNativeFileSystem.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
hkNativeFileSystem::hkNativeFileSystem()
{
}

// Destroys hkNativeFileSystem; the PDB prototype lists void(IMovementControllerRegisterInterface*),
// whereas the target is a scalar deleting destructor taking flags.
hkNativeFileSystem::~hkNativeFileSystem()
{
}
