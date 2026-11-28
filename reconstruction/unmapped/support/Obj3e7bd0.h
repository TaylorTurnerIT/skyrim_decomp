// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3e7bd0, Obj3e7bd0::Material, Obj3e7bd0::ShaderProp, Obj3e7bd0::Geometry, Obj3e7bd0::NodeGroup, Obj3e7bd0::Node, Obj3e7bd0::Function3e7bd0, gShaderRtti33d49d8: GUESS(low)
#pragma once

#include <cstdint>

class Obj3e7bd0
{
public:
    class Material
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void Unk_02();
        virtual void Unk_03();
        virtual void Unk_04();
        virtual void Unk_05();
        virtual void Unk_06();
        virtual void Unk_07();
        virtual void Unk_08();
        virtual void Update();
    };

    class ShaderProp
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual const void* GetRTTI() const;

        std::uint8_t unk08[0x30];  // 0x08
        std::uint64_t flags38;     // 0x38
        std::uint8_t unk40[0x38];  // 0x40
        Material* material78;      // 0x78
    };

    struct Geometry
    {
        std::uint8_t unk00[0x128];  // 0x000
        ShaderProp* shaderProp128;  // 0x128
    };

    class Node;

    struct NodeGroup
    {
        std::uint8_t unk00[0x118];  // 0x000
        Node** children;            // 0x118
        std::uint16_t unk120;       // 0x120
        std::uint16_t childCount;   // 0x122
    };

    class Node
    {
    public:
        virtual void Unk_00();
        virtual void Unk_01();
        virtual void Unk_02();
        virtual NodeGroup* AsNode();
        virtual void Unk_04();
        virtual void Unk_05();
        virtual void Unk_06();
        virtual Geometry* AsGeometry();
    };

    void Function3e7bd0(Node* node);  // compared: 0x3e7bd0
};

extern const std::uint8_t gShaderRtti33d49d8;
