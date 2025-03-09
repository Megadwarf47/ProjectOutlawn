///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpatialEntityData.h>
#include <fb/TeamId.h>

namespace fb {
	class BulletEntityData;
}

namespace fb {
	class CombatAreaTriggerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CombatAreaTriggerEntityData"); }
		virtual ~CombatAreaTriggerEntityData() override {}
		CombatAreaTriggerEntityData() {
			m_timeToReturn = 10;
			m_spawnHeight = 50.f;
			m_maxRandomSpawnHeight = 100.f;
			m_strikeRadius = 5.f;
			m_initalSpeed = 100.f;
			m_team = TeamId::TeamNeutral;
			m_isAiAllowedOutside = true;
			m_isTeamSpecific = false;
			m_enabled = true;
		};

		u32 m_timeToReturn; // 0x60 (96)
		CtrRef<BulletEntityData> m_deserterProjectile; // 0x68 (104)
		float m_spawnHeight; // 0x70 (112)
		float m_maxRandomSpawnHeight; // 0x74 (116)
		float m_strikeRadius; // 0x78 (120)
		float m_initalSpeed; // 0x7C (124)
		TeamId m_team; // 0x80 (128)
		bool m_isAiAllowedOutside; // 0x84 (132)
		bool m_isTeamSpecific; // 0x85 (133)
		bool m_enabled; // 0x86 (134)
	}; // 0x90 (144)
}

