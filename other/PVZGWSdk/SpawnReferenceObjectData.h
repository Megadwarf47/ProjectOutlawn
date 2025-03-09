///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LinearTransform.h>
#include <fb/RefArray.h>
#include <fb/ReferenceObjectData.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class ExtraSpawnData;
}

namespace fb {
	class SpawnReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnReferenceObjectData"); }
		virtual ~SpawnReferenceObjectData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		SpawnReferenceObjectData() {
			m_team = TeamId::Team2;
			m_initialSpawnDelay = 0.f;
			m_spawnDelay = 0.f;
			m_maxCount = 1;
			m_maxCountSimultaneously = 0;
			m_totalCountSimultaneouslyOfType = 0;
			m_spawnAreaRadius = 0.f;
			m_spawnProtectionRadius = 0.f;
			m_spawnProtectionFriendlyKilledCount = 0;
			m_spawnProtectionFriendlyKilledTime = 30.f;
			m_takeControlEntryIndex = 0;
			m_rotationYaw = 0.f;
			m_rotationPitch = 0.f;
			m_rotationRoll = 0.f;
			m_throttle = 0.f;
			m_enabled = true;
			m_lockedTeam = false;
			m_initialAutoSpawn = false;
			m_autoSpawn = false;
			m_queueSpawnEvent = true;
			m_useAsSpawnPoint = true;
			m_spawnProtectionCheckAllTeams = true;
			m_clearBangersOnSpawn = true;
			m_onlySendEventForHumanPlayers = true;
			m_sendWeaponEvents = false;
			m_tryToSpawnOutOfSight = false;
			m_takeControlOnTransformChange = true;
			m_returnControlOnIdle = true;
		};

		LinearTransform m_controllableTransform; // 0x80 (128)
		LinearTransform m_controllableInput; // 0xC0 (192)
		RefArray<ExtraSpawnData> m_extraSpawnData; // 0x100 (256)
		String m_locationNameSid; // 0x108 (264)
		String m_locationTextSid; // 0x110 (272)
		TeamId m_team; // 0x118 (280)
		float m_initialSpawnDelay; // 0x11C (284)
		float m_spawnDelay; // 0x120 (288)
		s32 m_maxCount; // 0x124 (292)
		s32 m_maxCountSimultaneously; // 0x128 (296)
		s32 m_totalCountSimultaneouslyOfType; // 0x12C (300)
		float m_spawnAreaRadius; // 0x130 (304)
		float m_spawnProtectionRadius; // 0x134 (308)
		u32 m_spawnProtectionFriendlyKilledCount; // 0x138 (312)
		float m_spawnProtectionFriendlyKilledTime; // 0x13C (316)
		s32 m_takeControlEntryIndex; // 0x140 (320)
		float m_rotationYaw; // 0x144 (324)
		float m_rotationPitch; // 0x148 (328)
		float m_rotationRoll; // 0x14C (332)
		float m_throttle; // 0x150 (336)
		bool m_enabled; // 0x154 (340)
		bool m_lockedTeam; // 0x155 (341)
		bool m_initialAutoSpawn; // 0x156 (342)
		bool m_autoSpawn; // 0x157 (343)
		bool m_queueSpawnEvent; // 0x158 (344)
		bool m_useAsSpawnPoint; // 0x159 (345)
		bool m_spawnProtectionCheckAllTeams; // 0x15A (346)
		bool m_clearBangersOnSpawn; // 0x15B (347)
		bool m_onlySendEventForHumanPlayers; // 0x15C (348)
		bool m_sendWeaponEvents; // 0x15D (349)
		bool m_tryToSpawnOutOfSight; // 0x15E (350)
		bool m_takeControlOnTransformChange; // 0x15F (351)
		bool m_returnControlOnIdle; // 0x160 (352)
	}; // 0x170 (368)
}

