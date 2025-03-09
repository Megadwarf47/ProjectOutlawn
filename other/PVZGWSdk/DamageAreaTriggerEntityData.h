///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TeamId.h>
#include <fb/TriggerEntityData.h>

namespace fb {
	class DamageAreaTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DamageAreaTriggerEntityData"); }
		virtual ~DamageAreaTriggerEntityData() override {}
		DamageAreaTriggerEntityData() {
			m_damagePerSecond = 0.f;
			m_damageTime = 0.f;
			m_teamOfImmortalCharacters = TeamId::Team1;
			m_damageCharacters = true;
			m_killCharactersByAdmin = false;
			m_damageVehicles = true;
			m_damageBangers = true;
			m_damageProjectiles = true;
			m_damageStaticModelEntities = false;
			m_setDamageGiverFromEvent = false;
			m_excludeImmortalCharactersInTeam = false;
			m_excludeShieldedSoldiers = false;
			m_isNeverTriggeredByPlayer = false;
			m_excludeHumanSoldiers = false;
		};

		float m_damagePerSecond; // 0x70 (112)
		float m_damageTime; // 0x74 (116)
		TeamId m_teamOfImmortalCharacters; // 0x78 (120)
		bool m_damageCharacters; // 0x7C (124)
		bool m_killCharactersByAdmin; // 0x7D (125)
		bool m_damageVehicles; // 0x7E (126)
		bool m_damageBangers; // 0x7F (127)
		bool m_damageProjectiles; // 0x80 (128)
		bool m_damageStaticModelEntities; // 0x81 (129)
		bool m_setDamageGiverFromEvent; // 0x82 (130)
		bool m_excludeImmortalCharactersInTeam; // 0x83 (131)
		bool m_excludeShieldedSoldiers; // 0x84 (132)
		bool m_isNeverTriggeredByPlayer; // 0x85 (133)
		bool m_excludeHumanSoldiers; // 0x86 (134)
	}; // 0x90 (144)
}

