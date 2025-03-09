///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/KillWeight.h>
#include <fb/TeamId.h>

namespace fb {
	class KillCounterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KillCounterEntityData"); }
		virtual ~KillCounterEntityData() override {}
		KillCounterEntityData() {
			m_teamId = TeamId::Team1;
			m_maxKillCount = 50;
			m_enemyWeight = 1.f;
			m_ignoreAI = false;
			m_ignoreAIVictims = false;
			m_enabled = true;
		};

		TeamId m_teamId; // 0x18 (24)
		s32 m_maxKillCount; // 0x1C (28)
		float m_enemyWeight; // 0x20 (32)
		KillWeight m_neutralTeamWeight; // 0x24 (36)
		KillWeight m_teamKillWeight; // 0x30 (48)
		bool m_ignoreAI; // 0x3C (60)
		bool m_ignoreAIVictims; // 0x3D (61)
		bool m_enabled; // 0x3E (62)
	}; // 0x40 (64)
}

