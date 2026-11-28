// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: MapBase38c2c0::~MapBase38c2c0 (inline helper), treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x38c2c0 Obj38c2c0::dtor
#include "Obj38c2c0.h"

// PDB prototype: a NiBoneMatrixSetterI constructor, which does not fit this destructor.
// Note: CrashLogger PDB lists NiTMap_uchar_bool_::ctor here, which disagrees with this destructor body.
// Clears map entries and chains to the base map destructor to free the bucket table.
Obj38c2c0::~Obj38c2c0()
{
    RemoveAll();
}
