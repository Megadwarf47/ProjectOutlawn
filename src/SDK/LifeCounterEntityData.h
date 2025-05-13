///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class LifeCounterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LifeCounterEntityData"); }
		virtual ~LifeCounterEntityData() override {}
		LifeCounterEntityData() {
			m_teamId = TeamId::Team1;
			m_uiShowCountLowerThreshold = 10;
			m_uiShowCountUpperThreshold = 20;
			m_startingLifeCount = 100;
			m_startingTimeLeft = 300.f;
			m_baseCount = 0;
			m_reinforceThreshold = 0;
			m_defensiveKillRadius = 10.f;
			m_fallbackTime = 20.f;
			m_fightHarderTreshold = 20.f;
			m_displayTime = 5.f;
			m_ignoreAI = false;
			m_ignoreAIVictims = false;
			m_attacker = false;
			m_simpleReinforce = true;
			m_setBestSquadSpawner = true;
			m_timeBased = false;
			m_enabled = true;
		};

		TeamId m_teamId; // 0x18 (24)
		Array<s32> m_lifeTresholdValues; // 0x20 (32)
		s32 m_uiShowCountLowerThreshold; // 0x28 (40)
		s32 m_uiShowCountUpperThreshold; // 0x2C (44)
		s32 m_startingLifeCount; // 0x30 (48)
		float m_startingTimeLeft; // 0x34 (52)
		s32 m_baseCount; // 0x38 (56)
		s32 m_reinforceThreshold; // 0x3C (60)
		Array<float> m_reinforceTable; // 0x40 (64)
		float m_defensiveKillRadius; // 0x48 (72)
		float m_fallbackTime; // 0x4C (76)
		String m_fightHarderMessageSid; // 0x50 (80)
		float m_fightHarderTreshold; // 0x58 (88)
		String m_reinforceMessageSid; // 0x60 (96)
		float m_displayTime; // 0x68 (104)
		bool m_ignoreAI; // 0x6C (108)
		bool m_ignoreAIVictims; // 0x6D (109)
		bool m_attacker; // 0x6E (110)
		bool m_simpleReinforce; // 0x6F (111)
		bool m_setBestSquadSpawner; // 0x70 (112)
		bool m_timeBased; // 0x71 (113)
		bool m_enabled; // 0x72 (114)
	}; // 0x78 (120)
}

