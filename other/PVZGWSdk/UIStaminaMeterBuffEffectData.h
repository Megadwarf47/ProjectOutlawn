///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/String.h>

namespace fb {
	class UIStaminaMeterBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIStaminaMeterBuffEffectData"); }
		virtual ~UIStaminaMeterBuffEffectData() override {}
		UIStaminaMeterBuffEffectData() {
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		String m_staminaMeterName; // 0x10 (16)
		float m_minPowerThreshold; // 0x18 (24)
		float m_maxPowerThreshold; // 0x1C (28)
	}; // 0x20 (32)
}

