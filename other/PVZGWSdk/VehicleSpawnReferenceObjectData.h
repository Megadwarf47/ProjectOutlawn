///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntryEnterRestriction.h>
#include <fb/SpawnReferenceObjectData.h>

namespace fb {
	class VehicleSpawnReferenceObjectData : public SpawnReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleSpawnReferenceObjectData"); }
		virtual ~VehicleSpawnReferenceObjectData() override {}
		VehicleSpawnReferenceObjectData() {
			m_wreckDuration = 0.f;
			m_enterRestriction = EntryEnterRestriction::EntryEnterRestriction_OnlyPrimaryEntry;
			m_botBailWhenHealthBelow = 0.f;
			m_botBailOutDelay = 0.5f;
			m_respawnRange = 15.f;
			m_timeUntilAbandoned = 10.f;
			m_timeUntilAbandonedIsDestroyed = 10.f;
			m_keepAliveRadius = 50.f;
			m_activeStanceEntryIndex = 0;
			m_activeStance = 0;
			m_vehicleIsNearDistance = 0.f;
			m_setTeamOnSpawn = false;
			m_affectedByImpulse = true;
			m_aiAllowedToFollowHumanInVehicle = true;
			m_aiUseExitPoints = true;
			m_applyDamageToAbandonedVehicles = false;
			m_enableAvailableSeatOutput = false;
			m_disregardSpawnAllowedSetting = false;
			m_ignoreFromBossMode = false;

			m_spawnAreaRadius = 2.5f;
			m_initialAutoSpawn = true;
		};

		float m_wreckDuration; // 0x170 (368)
		EntryEnterRestriction m_enterRestriction; // 0x174 (372)
		float m_botBailWhenHealthBelow; // 0x178 (376)
		float m_botBailOutDelay; // 0x17C (380)
		float m_respawnRange; // 0x180 (384)
		float m_timeUntilAbandoned; // 0x184 (388)
		float m_timeUntilAbandonedIsDestroyed; // 0x188 (392)
		float m_keepAliveRadius; // 0x18C (396)
		s32 m_activeStanceEntryIndex; // 0x190 (400)
		s32 m_activeStance; // 0x194 (404)
		float m_vehicleIsNearDistance; // 0x198 (408)
		bool m_setTeamOnSpawn; // 0x19C (412)
		bool m_affectedByImpulse; // 0x19D (413)
		bool m_aiAllowedToFollowHumanInVehicle; // 0x19E (414)
		bool m_aiUseExitPoints; // 0x19F (415)
		bool m_applyDamageToAbandonedVehicles; // 0x1A0 (416)
		bool m_enableAvailableSeatOutput; // 0x1A1 (417)
		bool m_disregardSpawnAllowedSetting; // 0x1A2 (418)
		bool m_ignoreFromBossMode; // 0x1A3 (419)
	}; // 0x1B0 (432)
}

