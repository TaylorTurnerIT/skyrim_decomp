// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3fe380 Obj3fe380::Function3fe380
// Adapted bodies: none
#include "Obj3fe380.h"

extern "C" __declspec(dllimport) void* __stdcall TlsGetValue(unsigned long dwTlsIndex);

// Frees ptr through the thread-local memory router heap allocator using its stored size.
void Obj3fe380::Function3fe380(void* ptr, std::size_t fallbackSize) noexcept
{
    Obj3fe380* obj = static_cast<Obj3fe380*>(ptr);
    std::uint16_t memSize = obj->memSizeAndFlags;
    Router* router = static_cast<Router*>(TlsGetValue(g_tlsSlot3fe380));
    router->heap->BlockFree(obj, (memSize == 0xFFFFu) ? static_cast<std::int32_t>(fallbackSize)
                                                      : static_cast<std::int32_t>(memSize));
}
