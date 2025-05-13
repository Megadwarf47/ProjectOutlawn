///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DifficultyData.h>

namespace fb {
	class PVZDifficultyData : public DifficultyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZDifficultyData"); }
		virtual ~PVZDifficultyData() override {}
		PVZDifficultyData() {
			m_aiVersusHumanDamageModifier = 1.f;
			m_maxRegenerationHealthMultiplier = 1.f;
			m_maxRegenerationHealthMultiplierIncrement = 0.f;
			m_regenerationRateMultiplier = 1.f;
			m_regenerationDelayMultiplier = 1.f;
			m_zombieHealthModifier = 1.f;
			m_plantHealthModifier = 1.f;
		};

		float m_aiVersusHumanDamageModifier; // 0xC0 (192)
		float m_maxRegenerationHealthMultiplier; // 0xC4 (196)
		float m_maxRegenerationHealthMultiplierIncrement; // 0xC8 (200)
		float m_regenerationRateMultiplier; // 0xCC (204)
		float m_regenerationDelayMultiplier; // 0xD0 (208)
		float m_zombieHealthModifier; // 0xD4 (212)
		float m_plantHealthModifier; // 0xD8 (216)
	}; // 0xE0 (224)
}

