///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class PVZCommanderAbilityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCommanderAbilityData"); }
		virtual ~PVZCommanderAbilityData() override {}
		PVZCommanderAbilityData() {
			m_executionDuration = 0.f;
			m_graceDuration = 5.f;
			m_team = TeamId::TeamNeutral;
			m_isVisible = true;
		};

		float m_executionDuration; // 0x18 (24)
		float m_graceDuration; // 0x1C (28)
		TeamId m_team; // 0x20 (32)
		String m_iconID; // 0x28 (40)
		bool m_isVisible; // 0x30 (48)
	}; // 0x38 (56)
}

