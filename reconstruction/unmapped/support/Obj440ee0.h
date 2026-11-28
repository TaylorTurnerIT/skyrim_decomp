// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Mat440ee0::operator== (inline helper), treated as adapted: shaped like NiMatrix3::operator== (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/N/NiMatrix3.cpp:126, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj440ee0, Mat440ee0, Find, v, data, unk08, size: GUESS(low) STANDIN
#pragma once

#include <cstdint>

struct Mat440ee0
{
    bool operator==(const Mat440ee0& a_rhs) const
    {
        return v[0] == a_rhs.v[0] && v[1] == a_rhs.v[1] && v[2] == a_rhs.v[2] &&
               v[3] == a_rhs.v[3] && v[4] == a_rhs.v[4] && v[5] == a_rhs.v[5] &&
               v[6] == a_rhs.v[6] && v[7] == a_rhs.v[7] && v[8] == a_rhs.v[8];
    }

    float v[9];
};
static_assert(sizeof(Mat440ee0) == 0x24, "Mat440ee0 size");

struct Obj440ee0
{
    std::int32_t Find(const Mat440ee0& a_target) const;  // compared: 0x440ee0

    Mat440ee0* data;
    std::uint64_t unk08;
    std::uint32_t size;
};
