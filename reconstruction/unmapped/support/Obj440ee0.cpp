// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Mat440ee0::operator== (inline helper), treated as adapted: shaped like NiMatrix3::operator== (CharmedBaryon/CommonLibSSE-NG@b93280e src/RE/N/NiMatrix3.cpp:126, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x440ee0 Obj440ee0::Find
// Recipe: reconstruction/recipes/o2-fpfast.json
#include "Obj440ee0.h"

// Searches the 3x3 float matrix array for an exact match and returns its index or -1.
std::int32_t Obj440ee0::Find(const Mat440ee0& a_target) const
{
    std::int32_t result = -1;
    for (std::uint32_t i = 0; i < size && result == -1; ++i) {
        if (data[i] == a_target) {
            result = static_cast<std::int32_t>(i);
        }
    }
    return result;
}
