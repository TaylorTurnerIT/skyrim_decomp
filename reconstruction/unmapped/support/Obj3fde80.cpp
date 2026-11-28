// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x3fde80 Obj3fde80::Derived::~Derived
#include "Obj3fde80.h"

// PDB: the CrashLogger PDB name here is HavokFileStreambufWriter::~HavokFileStreambufWriter; the stand-in name is kept.
// Deletes stream when ownsStream is set, then runs Base::~Base.
Obj3fde80::Derived::~Derived()
{
    if (ownsStream) {
        delete stream;
    }
}
