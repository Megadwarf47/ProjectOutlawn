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
	class TeamLifeCounterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamLifeCounterEntityData"); }
		virtual ~TeamLifeCounterEntityData() override {}
		TeamLifeCounterEntityData() {
			m_teamId = TeamId::Team2;
			m_startLifeCount = 5;
			m_teamReviveCounter = 3;
			m_enabled = true;
		};

		TeamId m_teamId; // 0x18 (24)
		u32 m_startLifeCount; // 0x1C (28)
		s32 m_teamReviveCounter; // 0x20 (32)
		String m_teamReviveConsumableKey; // 0x28 (40)
		bool m_enabled; // 0x30 (48)
	}; // 0x38 (56)
}

