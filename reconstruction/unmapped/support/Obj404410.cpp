// Source exposure: mixed (pinned image listing; community source).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Cookbook: 0x404410 14
// 0x404410 Obj404410::dtor
// Adapted bodies: none
#include "Obj404410.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
Obj404410::Obj404410()
{
}

// Destroys Obj404410 and frees fixed-size storage through the TLS memory router.
Obj404410::~Obj404410()
{
}
