// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj360a20::ClearOwnership, treated as adapted: shaped like Script_ClearOwnershipFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesscriptfunctions.cpp:6677
// SPDX-License-Identifier: CC0-1.0
// Obj360a20, ExtraDataList360a20, Ref360a20: GUESS(low); PDB lists GameFunc__handler::ClearOwnership_1403039E0
// Obj360a20::ClearOwnership: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct ExtraDataList360a20
{
    void ClearOwnership();
};

struct Ref360a20
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual void Slot03();
    virtual void Slot04();
    virtual void Slot05();
    virtual void Slot06();
    virtual void Slot07();
    virtual void Slot08();
    virtual void Slot09();
    virtual void MarkChanged(std::uint32_t flags);

    std::uint8_t unk08[0x68];
    ExtraDataList360a20 extraList;
};

class Obj360a20
{
public:
    static bool ClearOwnership(void* paramInfo, void* scriptData, Ref360a20* thisObj);
};
