///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PVZFriendZoneEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZFriendZoneEntityData"); }
		virtual ~PVZFriendZoneEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PVZFriendZoneEntityData() {
			m_friendlyWeight = 1;
			m_enemyWeight = -2;
			m_corpsWeight = -2;
			m_corpsTimeout = 15;
			m_enabled = true;
			m_countCorpsesForAllTeams = false;
			m_initialZoneRandomized = true;
		};

		s32 m_friendlyWeight; // 0x18 (24)
		s32 m_enemyWeight; // 0x1C (28)
		s32 m_corpsWeight; // 0x20 (32)
		s32 m_corpsTimeout; // 0x24 (36)
		bool m_enabled; // 0x28 (40)
		bool m_countCorpsesForAllTeams; // 0x29 (41)
		bool m_initialZoneRandomized; // 0x2A (42)
	}; // 0x30 (48)
}

