// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3e7bd0 Obj3e7bd0::Function3e7bd0
// Adapted bodies: none
#include "Obj3e7bd0.h"

// Recursively traverses a node tree and updates materials on matching shader properties.
void Obj3e7bd0::Function3e7bd0(Node* node)
{
    if (node == nullptr) {
        return;
    }
    NodeGroup* group = node->AsNode();
    if (group != nullptr) {
        for (std::uint32_t i = 0; i < group->childCount; ++i) {
            Function3e7bd0(group->children[i]);
        }
    } else if (node->AsGeometry() != nullptr) {
        ShaderProp* prop = node->AsGeometry()->shaderProp128;
        if (prop != nullptr && prop->GetRTTI() == &gShaderRtti33d49d8) {
            if ((prop->flags38 & 0x200000ULL) > 0 || (prop->flags38 & 0x400ULL) > 0) {
                prop->material78->Update();
            }
        }
    }
}
