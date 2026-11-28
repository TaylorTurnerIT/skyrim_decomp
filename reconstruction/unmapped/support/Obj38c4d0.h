// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj38c4d0::~Obj38c4d0, treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj38c4d0, Obj38c4d0::~Obj38c4d0, FreeBuckets38c4d0: GUESS(low); PDB lists BSTDerivedCreator_BGSProcedureKeepAnEyeOn_IProcedure_::Func1, which disagrees with the observed deleting destructor body
#pragma once

#include <cstdint>

void FreeBuckets38c4d0(void* buckets);

class Obj38c4d0
{
public:
    Obj38c4d0();
    virtual ~Obj38c4d0()  // compared: 0x38c4d0 (scalar deleting destructor)
    {
        RemoveAll();
        FreeBuckets38c4d0(buckets);
    }

    void RemoveAll();

    std::uint32_t hashSize;
    std::uint32_t unk0c;
    void* buckets;
    std::uint32_t count;
    std::uint32_t unk1c;
};
