///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>

namespace fb {
	class VelocityOverrideBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VelocityOverrideBuffEffectData"); }
		virtual ~VelocityOverrideBuffEffectData() override {}
		VelocityOverrideBuffEffectData() {
			m_minSpeedMultiplier = 0.f;
			m_maxSpeedMultiplier = 0.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		float m_minSpeedMultiplier; // 0x10 (16)
		float m_maxSpeedMultiplier; // 0x14 (20)
		float m_minPowerThreshold; // 0x18 (24)
		float m_maxPowerThreshold; // 0x1C (28)
	}; // 0x20 (32)
}

