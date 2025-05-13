///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LocalLightEntityData.h>
#include <fb/QualityLevel.h>
#include <fb/QualityScalableEnabled.h>
#include <fb/SpotLightShape.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class SpotLightEntityData : public LocalLightEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpotLightEntityData"); }
		virtual ~SpotLightEntityData() override {}
		SpotLightEntityData() {
			m_shape = SpotLightShape::SpotLightShape_Cone;
			m_coneInnerAngle = 0.f;
			m_coneOuterAngle = 40.f;
			m_frustumFov = 40.f;
			m_frustumAspect = 1.f;
			m_orthoWidth = 5.f;
			m_orthoHeight = 5.f;
			m_nearPlane = 0.f;
			m_castShadows = QualityScalableEnabled::QualityScalableEnabled_Disabled;
			m_shadowRadius = 0.f;
			m_shadowCullDistance = 0.f;
			m_frustumAsCone = QualityScalableEnabled::QualityScalableEnabled_Disabled;
			m_frustumAsConeIntensityScale = 1.f;
			m_castShadowsMinLevel = QualityLevel::QualityLevel_Low;
			m_frustumAsConeAngle = true;
			m_castShadowsEnable = true;
		};

		SpotLightShape m_shape; // 0xB0 (176)
		float m_coneInnerAngle; // 0xB4 (180)
		float m_coneOuterAngle; // 0xB8 (184)
		float m_frustumFov; // 0xBC (188)
		float m_frustumAspect; // 0xC0 (192)
		float m_orthoWidth; // 0xC4 (196)
		float m_orthoHeight; // 0xC8 (200)
		float m_nearPlane; // 0xCC (204)
		CtrRef<TextureAsset> m_texture; // 0xD0 (208)
		QualityScalableEnabled m_castShadows; // 0xD8 (216)
		float m_shadowRadius; // 0xDC (220)
		float m_shadowCullDistance; // 0xE0 (224)
		QualityScalableEnabled m_frustumAsCone; // 0xE4 (228)
		float m_frustumAsConeIntensityScale; // 0xE8 (232)
		QualityLevel m_castShadowsMinLevel; // 0xEC (236)
		bool m_frustumAsConeAngle; // 0xF0 (240)
		bool m_castShadowsEnable; // 0xF1 (241)
	}; // 0x100 (256)
}

