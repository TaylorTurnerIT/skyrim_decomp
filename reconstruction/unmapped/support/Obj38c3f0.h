// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: MapBase38c3f0::~MapBase38c3f0 (inline helper), treated as adapted: shaped like NiTMapBase::~NiTMapBase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/N/NiTMapBase.h:209, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj38c3f0, Obj38c3f0::~Obj38c3f0, MapBase38c3f0, FreeBuckets38c3f0: GUESS(low); PDB lists AutoRegisterCreator_BGSProcedureKeepAnEyeOn_BSTCreateFactoryManager_BSFixedString_IProcedure_256::Func1, which disagrees with the observed deleting destructor body
#pragma once

#include <cstdint>

void FreeBuckets38c3f0(void* buckets);

struct MapBase38c3f0
{
    virtual ~MapBase38c3f0()
    {
        RemoveAll();
        FreeBuckets38c3f0(buckets);
    }

    void RemoveAll();

    std::uint32_t hashSize;
    std::uint32_t unk0c;
    void* buckets;
    std::uint32_t count;
    std::uint32_t unk1c;
};

class Obj38c3f0 : public MapBase38c3f0
{
public:
    Obj38c3f0();
    ~Obj38c3f0() override  // compared: 0x38c3f0 (scalar deleting destructor)
    {
        RemoveAll();
    }
};
