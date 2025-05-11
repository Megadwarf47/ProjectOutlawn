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
	class DisableModBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DisableModBuffEffectData"); }
		virtual ~DisableModBuffEffectData() override {}
		DisableModBuffEffectData() {
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		String m_externalModId; // 0x10 (16)
		float m_minPowerThreshold; // 0x18 (24)
		float m_maxPowerThreshold; // 0x1C (28)
	}; // 0x20 (32)
}

