// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj38c530::~Obj38c530, treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj38c530, Obj38c530::~Obj38c530, FreeBuckets38c530: GUESS(low); PDB lists NiTMapBase_DFALL_NiTMapItem_NiAVObject__bool___NiAVObject__bool___dtor
#pragma once

#include <cstdint>

void FreeBuckets38c530(void* buckets);

class Obj38c530
{
public:
    Obj38c530();
    virtual ~Obj38c530()  // compared: 0x38c530 (scalar deleting destructor)
    {
        RemoveAll();
        FreeBuckets38c530(buckets);
    }

    void RemoveAll();

    std::uint32_t hashSize;
    std::uint32_t unk0c;
    void* buckets;
    std::uint32_t count;
    std::uint32_t unk1c;
};
