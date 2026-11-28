// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj41a070::SetSlot, treated as adapted: shaped like a reference-counted pointer assignment in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00460000_o2.cpp:11923
// SPDX-License-Identifier: CC0-1.0
// 0x41a070 Obj41a070::SetSlot
#include "Obj41a070.h"

// Assigns a reference-counted object to the indexed slot.
void Obj41a070::SetSlot(std::uint32_t a_index, RefObj41a070* a_obj)
{
    slots[a_index] = a_obj;
}
