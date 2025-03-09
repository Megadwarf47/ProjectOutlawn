///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/QualityLevel.h>
#include <fb/String.h>

namespace fb {
	class MeshSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshSettings"); }
		virtual ~MeshSettings() override {}
		MeshSettings() {
			m_forceLod = -1;
			m_globalLodScale = 1.f;
			m_shadowDistanceScale = 1.f;
			m_tessellationMaxFactor = 15.f;
			m_tessellationForceTessellationFactor = -1.f;
			m_tessellationMaxDistance = -1.f;
			m_tessellationMaxDistanceFade = 0.1f;
			m_castSunShadowQualityLevel = QualityLevel::QualityLevel_Low;
			m_castDynamicEnvmapQualityLevel = QualityLevel::QualityLevel_Low;
			m_castPlanarReflectionQualityLevel = QualityLevel::QualityLevel_Low;
			m_loadingEnabled = true;
			m_tessellationEnable = true;
			m_tessellationBackFaceCullingEnable = true;
			m_tessellationScreenSpaceAdativeEnable = true;
		};

		String m_overrideShadersShaderName; // 0x10 (16)
		String m_overrideShadersMeshName; // 0x18 (24)
		s32 m_forceLod; // 0x20 (32)
		float m_globalLodScale; // 0x24 (36)
		float m_shadowDistanceScale; // 0x28 (40)
		float m_tessellationMaxFactor; // 0x2C (44)
		float m_tessellationForceTessellationFactor; // 0x30 (48)
		float m_tessellationMaxDistance; // 0x34 (52)
		float m_tessellationMaxDistanceFade; // 0x38 (56)
		QualityLevel m_castSunShadowQualityLevel; // 0x3C (60)
		QualityLevel m_castDynamicEnvmapQualityLevel; // 0x40 (64)
		QualityLevel m_castPlanarReflectionQualityLevel; // 0x44 (68)
		bool m_loadingEnabled; // 0x48 (72)
		bool m_tessellationEnable; // 0x49 (73)
		bool m_tessellationBackFaceCullingEnable; // 0x4A (74)
		bool m_tessellationScreenSpaceAdativeEnable; // 0x4B (75)
	}; // 0x50 (80)
}

