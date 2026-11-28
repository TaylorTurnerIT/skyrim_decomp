// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x427720 BSResourceFaceGenBinaryFile427720::Func10_1403C6D10
#include "BSResourceFaceGenBinaryFile427720.h"

// PDB prototype: void (ArrowProjectile*, NiPoint3*), which does not fit this body.
// Deletes and clears the underlying stream pointer; PDB lists BSResourceFaceGenBinaryFile::Func10_1403C6D10.
void BSResourceFaceGenBinaryFile427720::Func10_1403C6D10()
{
    delete stream;
    stream = nullptr;
}
