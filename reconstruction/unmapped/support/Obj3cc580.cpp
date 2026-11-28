// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3cc580::Function3cc580, treated as adapted: shaped like an in-place byte swap of a record in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00540000_o2.cpp:12940
// SPDX-License-Identifier: CC0-1.0
// 0x3cc580 Obj3cc580::Function3cc580
#include "Obj3cc580.h"
#include <intrin.h>

// Byte-swaps the leading 32-bit field and the eleven following 16-bit fields in place.
void Obj3cc580::Function3cc580()
{
    // 32-bit endian byte swap for serialized record data
    word00 = _byteswap_ulong(word00);
    for (int i = 0; i < 11; ++i) {
        // 16-bit endian byte swap for serialized record data
        fields[i] = _byteswap_ushort(fields[i]);
    }
}
