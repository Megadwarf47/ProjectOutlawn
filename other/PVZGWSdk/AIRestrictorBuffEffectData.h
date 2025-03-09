///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>

namespace fb {
	class AIRestrictorBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIRestrictorBuffEffectData"); }
		virtual ~AIRestrictorBuffEffectData() override {}
		AIRestrictorBuffEffectData() {
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_pauseAI = true;
		};

		float m_minPowerThreshold; // 0x10 (16)
		float m_maxPowerThreshold; // 0x14 (20)
		bool m_pauseAI; // 0x18 (24)
	}; // 0x20 (32)
}

