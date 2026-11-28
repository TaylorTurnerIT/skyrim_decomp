// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3a8bb0 Obj3a8bb0::Function3a8bb0
// Adapted bodies: none
#include "Obj3a8bb0.h"

// Queries active actions until one returns true.
bool Obj3a8bb0::Function3a8bb0(void* arg1, void* arg2)
{
    bool result = false;
    if (actions.size != 0) {
        Action** it = actions.data;
        Action** end = it + actions.size;
        for (; it != end; ++it) {
            Action* action = *it;
            if (action != nullptr && (action->flags & 1u) != 0) {
                result = action->Unk_08(this, arg1, arg2);
                if (result) {
                    break;
                }
            }
        }
    }
    return result;
}
