///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/ShaderTessellationType.h>
#include <fb/SurfaceShaderInstanceDataStruct.h>

namespace fb {
	class SurfaceShaderInstanceData;
	class TextureAsset;
}

namespace fb {
	class MeshMaterial : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshMaterial"); }
		virtual ~MeshMaterial() override {}
		MeshMaterial() {
			m_tessellationType = ShaderTessellationType::ShaderTessellationType_None;
			m_tessellationTriangleSize = 12.f;
			m_tessellationMaxDistance = 20.f;
			m_backFaceCullEpsilon = 0.5f;
			m_shapeFactor = 0.75f;
			m_displacementScale = 1.f;
			m_displacementBias = 0.5f;
			m_displacementMapTexCoord = 0;
			m_smoothEdgeVertices = false;
		};

		CtrRef<SurfaceShaderInstanceData> m_shaderInstance; // 0x10 (16)
		SurfaceShaderInstanceDataStruct m_shader; // 0x18 (24)
		ShaderTessellationType m_tessellationType; // 0x40 (64)
		float m_tessellationTriangleSize; // 0x44 (68)
		float m_tessellationMaxDistance; // 0x48 (72)
		float m_backFaceCullEpsilon; // 0x4C (76)
		float m_shapeFactor; // 0x50 (80)
		CtrRef<TextureAsset> m_displacementMap; // 0x58 (88)
		float m_displacementScale; // 0x60 (96)
		float m_displacementBias; // 0x64 (100)
		u32 m_displacementMapTexCoord; // 0x68 (104)
		bool m_smoothEdgeVertices; // 0x6C (108)
	}; // 0x70 (112)
}

