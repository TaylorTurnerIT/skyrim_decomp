// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3ae030 Obj3ae030::Function3ae030
// Adapted bodies: none
#include "Obj3ae030.h"

// Reads three one-byte fields from the serialization buffer in reverse offset order.
void Obj3ae030::Function3ae030(Reader* reader)
{
    reader->ReadBytes(&flag12, 1, 1);
    reader->ReadBytes(&flag11, 1, 1);
    reader->ReadBytes(&flag10, 1, 1);
}
