// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Cookbook: 0x403e10 14
// 0x403e10 Obj403e10::dtor
// CI hash: 0x403e10 ??_GObj403e10@@UEAAPEAXI@Z
// Adapted bodies: none
#include "Obj403e10.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
Obj403e10::Obj403e10()
{
}

// Clears the global singleton pointer during destruction.
Obj403e10::~Obj403e10()
{
    g_singleton403e10 = nullptr;
}
