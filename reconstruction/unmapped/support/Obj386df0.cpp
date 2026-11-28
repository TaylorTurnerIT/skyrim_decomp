// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x386df0 Obj386df0::ReportError
// Adapted bodies: none
#include "Obj386df0.h"

#include <cstdarg>
#include <cstdio>

// Formats an error message into a local buffer, clears target status, and flags the error state.
void Obj386df0::ReportError(Target386df0* target, const char* fmt, ...)
{
    char buffer[260];
    std::va_list args;
    va_start(args, fmt);
    std::vsprintf(buffer, fmt, args);
    va_end(args);
    // The text is not used afterwards. Guess: the reporting call is not part of this build.
    target->status = 0;
    hasError = true;
}
