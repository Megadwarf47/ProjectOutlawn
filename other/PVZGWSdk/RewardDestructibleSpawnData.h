///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/Difficulty.h>
#include <fb/RewardSpawnType.h>

namespace fb {
	class AIDestructibleSpawnData;
}

namespace fb {
	class RewardDestructibleSpawnData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RewardDestructibleSpawnData"); }
		virtual ~RewardDestructibleSpawnData() override {}
		RewardDestructibleSpawnData() {
			m_spawnerWeight = 0.f;
			m_spawnCost = 0.f;
			m_difficultyInclusionLevel = Difficulty::Difficulty_None;
			m_waitForSpawnerCreation = true;
		};

		Array<RewardSpawnType> m_spawnTypes; // 0x18 (24)
		float m_spawnerWeight; // 0x20 (32)
		float m_spawnCost; // 0x24 (36)
		Difficulty m_difficultyInclusionLevel; // 0x28 (40)
		CtrRef<AIDestructibleSpawnData> m_failTombstoneData; // 0x30 (48)
		bool m_waitForSpawnerCreation; // 0x38 (56)
	}; // 0x40 (64)
}

