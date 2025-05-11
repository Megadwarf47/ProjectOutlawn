///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/DestructibleSpawnType.h>
#include <fb/Difficulty.h>

namespace fb {
	class AIDestructibleSpawnData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIDestructibleSpawnData"); }
		virtual ~AIDestructibleSpawnData() override {}
		AIDestructibleSpawnData() {
			m_maxSimultaneousAI = 8;
			m_timeToLive = 0.f;
			m_destroyAfterNumSpawns = 0;
			m_spawnerWeight = 0.f;
			m_spawnCost = 0.f;
			m_respawnDelay = 2.f;
			m_difficultyInclusionLevel = Difficulty::Difficulty_None;
			m_spawnMaxAtStart = true;
			m_waitForSpawnerCreation = true;
			m_staggerRespawns = false;
		};

		Array<DestructibleSpawnType> m_spawnTypes; // 0x18 (24)
		u32 m_maxSimultaneousAI; // 0x20 (32)
		float m_timeToLive; // 0x24 (36)
		u32 m_destroyAfterNumSpawns; // 0x28 (40)
		float m_spawnerWeight; // 0x2C (44)
		float m_spawnCost; // 0x30 (48)
		float m_respawnDelay; // 0x34 (52)
		Difficulty m_difficultyInclusionLevel; // 0x38 (56)
		bool m_spawnMaxAtStart; // 0x3C (60)
		bool m_waitForSpawnerCreation; // 0x3D (61)
		bool m_staggerRespawns; // 0x3E (62)
	}; // 0x40 (64)
}

