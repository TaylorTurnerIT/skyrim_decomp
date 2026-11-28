// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: MapBase38c310::~MapBase38c310 (inline helper), treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj38c310, MapBase38c310, FreeBuckets38c310: GUESS(low)
#pragma once

#include <cstdint>

void FreeBuckets38c310(void* buckets);

struct MapBase38c310
{
    virtual ~MapBase38c310()
    {
        RemoveAll();
        FreeBuckets38c310(buckets);
    }

    void RemoveAll();

    std::uint32_t hashSize;
    std::uint32_t unk0c;
    void* buckets;
};

class Obj38c310 : public MapBase38c310
{
public:
    ~Obj38c310() override;
};
