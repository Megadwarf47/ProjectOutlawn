///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class AIWaveDifficulty;
	class WaveBlueprints;
	class WaveComposition;
}

namespace fb {
	class AIWaveSpawnEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIWaveSpawnEntityData"); }
		virtual ~AIWaveSpawnEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		AIWaveSpawnEntityData() {
			m_playerCount = 0;
			m_waveNumber = 1;
			m_startDelayTime = 10.f;
			m_trackablePlayerPoiDistanceTrigger = 5.f;
			m_isContinuousSpawn = false;
			m_waitOnSlotsComplete = false;
			m_mustKillTrackablePlayer = false;
		};

		CtrRef<WaveBlueprints> m_blueprints; // 0x18 (24)
		RefArray<WaveComposition> m_waveData; // 0x20 (32)
		s32 m_playerCount; // 0x28 (40)
		s32 m_waveNumber; // 0x2C (44)
		float m_startDelayTime; // 0x30 (48)
		CtrRef<AIWaveDifficulty> m_waveDifficulty; // 0x38 (56)
		String m_introSIDOverride; // 0x40 (64)
		String m_waveType; // 0x48 (72)
		String m_challengeName; // 0x50 (80)
		float m_trackablePlayerPoiDistanceTrigger; // 0x58 (88)
		bool m_isContinuousSpawn; // 0x5C (92)
		bool m_waitOnSlotsComplete; // 0x5D (93)
		bool m_mustKillTrackablePlayer; // 0x5E (94)
	}; // 0x60 (96)
}

