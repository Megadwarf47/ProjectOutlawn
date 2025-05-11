///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>

namespace fb {
	class LookSpeedBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LookSpeedBuffEffectData"); }
		virtual ~LookSpeedBuffEffectData() override {}
		LookSpeedBuffEffectData() {
			m_minPowerMultiplier = 1.f;
			m_maxPowerMultiplier = 1.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		float m_minPowerMultiplier; // 0x10 (16)
		float m_maxPowerMultiplier; // 0x14 (20)
		float m_minPowerThreshold; // 0x18 (24)
		float m_maxPowerThreshold; // 0x1C (28)
	}; // 0x20 (32)
}

