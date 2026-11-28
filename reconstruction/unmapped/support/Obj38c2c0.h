// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: MapBase38c2c0::~MapBase38c2c0 (inline helper), treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj38c2c0, MapBase38c2c0, FreeBuckets38c2c0: GUESS(low); PDB lists NiTMap_uchar_bool_::ctor, which disagrees with the observed destructor body
#pragma once

#include <cstdint>

void FreeBuckets38c2c0(void* buckets);

struct MapBase38c2c0
{
    virtual ~MapBase38c2c0()
    {
        RemoveAll();
        FreeBuckets38c2c0(buckets);
    }

    void RemoveAll();

    std::uint32_t hashSize;
    std::uint32_t unk0c;
    void* buckets;
};

class Obj38c2c0 : public MapBase38c2c0
{
public:
    ~Obj38c2c0() override;
};
