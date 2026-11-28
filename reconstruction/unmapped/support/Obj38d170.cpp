// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x38d170 Obj38d170::Visit
#include "Obj38d170.h"

// PDB prototype: void (hkpWorldExtension*). It is not used: this visitor reads an entry and returns a value.
// Checks an entry point and dispatches its payload when active, always returning 1 to continue.
std::uint32_t Obj38d170::Visit(Entry38d170* entry)
{
    if (entry != nullptr && entry->Check(flag28, context)) {
        void* payload = entry->GetPayload();
        std::uint8_t kind = entry->GetKind();
        Dispatch38d170(kind, unk20, unk08, flag29, unk18, payload);
    }
    return 1;
}
