///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EffectEntityData.h>
#include <fb/QualityScalableFloat.h>
#include <fb/Vec4.h>

namespace fb {
	class LocalLightEntityData;
}

namespace fb {
	class LightEffectEntityData : public EffectEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LightEffectEntityData"); }
		virtual ~LightEffectEntityData() override {}
		LightEffectEntityData() {
			m_intensityCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_lifetime = -1.f;
			m_spawnProbability = QualityScalableFloat(1.f, 1.f, 1.f, 1.f);
			m_randomIntensityMin = 1.f;
			m_randomIntensityMax = 1.f;
			m_intensityMin = 0.f;
			m_intensityMax = 1.f;
			m_looping = false;
			m_localPlayerOnly = false;
		};

		Vec4 m_intensityCurve; // 0xA0 (160)
		CtrRef<LocalLightEntityData> m_light; // 0xB0 (176)
		float m_lifetime; // 0xB8 (184)
		QualityScalableFloat m_spawnProbability; // 0xBC (188)
		float m_randomIntensityMin; // 0xCC (204)
		float m_randomIntensityMax; // 0xD0 (208)
		float m_intensityMin; // 0xD4 (212)
		float m_intensityMax; // 0xD8 (216)
		bool m_looping; // 0xDC (220)
		bool m_localPlayerOnly; // 0xDD (221)
	}; // 0xE0 (224)
}

