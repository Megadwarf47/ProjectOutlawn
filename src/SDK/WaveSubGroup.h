///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/RewardInfo.h>
#include <fb/String.h>
#include <fb/TombstoneInfo.h>
#include <fb/WaveSpawnTypeSet.h>

namespace fb {
	class WaveSubGroup : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveSubGroup"); }
		virtual ~WaveSubGroup() override {}
		WaveSubGroup() {
			m_spawnChance = 1.f;
			m_completePercentage = 0.9f;
			m_activationDelay = 0.f;
			m_minSpawnDistanceFromBase = 70.f;
			m_maxSpawnDistanceFromBase = 100.f;
			m_minDistanceFromPlayer = 10.f;
			m_numMainSpawnPoints = 2;
			m_maxSpawnCount = 25;
			m_spawnPoolSize = 10.f;
			m_tombstoneSpawnAtPercent = 0.f;
			m_doRollOnce = false;
			m_useCustomSpawnPoint = false;
			m_searchVaseOnly = false;
			m_searchTransmitterOnly = false;
		};

		Array<WaveSpawnTypeSet> m_waveSpawnTypeSet; // 0x18 (24)
		float m_spawnChance; // 0x20 (32)
		float m_completePercentage; // 0x24 (36)
		String m_customSpawnPointName; // 0x28 (40)
		float m_activationDelay; // 0x30 (48)
		float m_minSpawnDistanceFromBase; // 0x34 (52)
		float m_maxSpawnDistanceFromBase; // 0x38 (56)
		float m_minDistanceFromPlayer; // 0x3C (60)
		u32 m_numMainSpawnPoints; // 0x40 (64)
		u32 m_maxSpawnCount; // 0x44 (68)
		float m_spawnPoolSize; // 0x48 (72)
		Array<TombstoneInfo> m_tombstoneInfos; // 0x50 (80)
		Array<RewardInfo> m_rewardInfos; // 0x58 (88)
		float m_tombstoneSpawnAtPercent; // 0x60 (96)
		bool m_doRollOnce; // 0x64 (100)
		bool m_useCustomSpawnPoint; // 0x65 (101)
		bool m_searchVaseOnly; // 0x66 (102)
		bool m_searchTransmitterOnly; // 0x67 (103)
	}; // 0x68 (104)
}

