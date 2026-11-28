// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x4276f0 BSResourceFaceGenBinaryFile4276f0::Func9_1403C6CE0
#include "BSResourceFaceGenBinaryFile4276f0.h"

// PDB prototype: NiPoint3 (NiPoint3*, ArrowProjectile*), which does not fit this body.
// Closes the underlying stream if present; PDB lists BSResourceFaceGenBinaryFile::Func9_1403C6CE0.
bool BSResourceFaceGenBinaryFile4276f0::Func9_1403C6CE0()
{
    if (stream) {
        stream->Close();
        return true;
    }
    return false;
}
