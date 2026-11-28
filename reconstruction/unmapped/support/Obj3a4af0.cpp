// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x3a4af0 Obj3a4af0::Resolve
// Adapted bodies: none
#include "Obj3a4af0.h"

// Resolves the entry in target corresponding to source's index, or returns nullptr.
void* Obj3a4af0::Resolve()
{
    if (source != nullptr && target != nullptr) {
        return target->Lookup(0, source->GetIndex());
    }
    return nullptr;
}
