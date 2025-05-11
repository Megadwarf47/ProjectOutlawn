///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/DecalAtlasTile.h>
#include <fb/SurfaceShaderInstanceDataStruct.h>

namespace fb {
	class DecalTemplateData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DecalTemplateData"); }
		virtual ~DecalTemplateData() override {}
		DecalTemplateData() {
			m_size = 1.f;
			m_randomSize = 0.f;
			m_rotation = 0.f;
			m_randomRotation = 0.f;
			m_clipAngle = 70.f;
			m_proximityRadiusFactor = 0.5f;
			m_normalOffset = 0.001f;
			m_meshUVIndex = -1;
			m_sortingPriority = 0;
			m_projected = true;
			m_projectMultiple = false;
		};

		float m_size; // 0x18 (24)
		float m_randomSize; // 0x1C (28)
		float m_rotation; // 0x20 (32)
		float m_randomRotation; // 0x24 (36)
		float m_clipAngle; // 0x28 (40)
		float m_proximityRadiusFactor; // 0x2C (44)
		float m_normalOffset; // 0x30 (48)
		DecalAtlasTile m_atlasTile; // 0x34 (52)
		SurfaceShaderInstanceDataStruct m_shader; // 0x48 (72)
		s32 m_meshUVIndex; // 0x70 (112)
		u8 m_sortingPriority; // 0x74 (116)
		bool m_projected; // 0x75 (117)
		bool m_projectMultiple; // 0x76 (118)
	}; // 0x78 (120)
}

