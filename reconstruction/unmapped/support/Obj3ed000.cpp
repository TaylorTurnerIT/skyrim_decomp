// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3ed000 Obj3ed000::Function3ed000
// Adapted bodies: none
#include "Obj3ed000.h"

extern "C" __declspec(dllimport) int strcpy_s(char* dst, std::size_t dstSize, const char* src);

// Formats the lower 24 bits of formId and index into outBuf, or copies the fallback string.
void Obj3ed000::Function3ed000(char* outBuf, const FormRef* form) const
{
    if (form != nullptr) {
        std::uint32_t idx = index;
        if (idx != 0) {
            FormatBuffer(outBuf, 0x104, g_fmt3ed000, form->formId & 0xFFFFFFu, idx);
        } else {
            strcpy_s(outBuf, 0x104, g_empty3ed000);
        }
    }
}
