// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: MapBase38c460::~MapBase38c460 (inline helper), treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj38c460, Obj38c460::~Obj38c460, MapBase38c460, FreeBuckets38c460: GUESS(low); PDB lists NiTMap_NiAVObject__bool___dtor
#pragma once

#include <cstdint>

void FreeBuckets38c460(void* buckets);

struct MapBase38c460
{
    virtual ~MapBase38c460()
    {
        RemoveAll();
        FreeBuckets38c460(buckets);
    }

    void RemoveAll();

    std::uint32_t hashSize;
    std::uint32_t unk0c;
    void* buckets;
    std::uint32_t count;
    std::uint32_t unk1c;
};

class Obj38c460 : public MapBase38c460
{
public:
    Obj38c460();
    ~Obj38c460() override  // compared: 0x38c460 (scalar deleting destructor)
    {
        RemoveAll();
    }
};
