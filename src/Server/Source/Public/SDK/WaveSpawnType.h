///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainerPolicyAsset.h>
#include <fb/Difficulty.h>
#include <fb/String.h>
#include <fb/TargetCharacterIconType.h>

namespace fb {
	class WaveSpawnType : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveSpawnType"); }
		virtual ~WaveSpawnType() override {}
		WaveSpawnType() {
			m_blueprintIndex = 0;
			m_count = 5;
			m_initialSpawnDelay = 0.f;
			m_spawnDelay = 0.f;
			m_spawnChanceWeight = 1.f;
			m_spawnCost = 1.f;
			m_trackedPlayerIconType = TargetCharacterIconType::TargetCharacterIconType_None;
			m_difficultInclusionLevel = Difficulty::Difficulty_None;
			m_isBoss = false;
			m_isTrackedPlayer = false;
		};

		s32 m_blueprintIndex; // 0x18 (24)
		s32 m_count; // 0x1C (28)
		float m_initialSpawnDelay; // 0x20 (32)
		float m_spawnDelay; // 0x24 (36)
		float m_spawnChanceWeight; // 0x28 (40)
		float m_spawnCost; // 0x2C (44)
		String m_bossID; // 0x30 (48)
		TargetCharacterIconType m_trackedPlayerIconType; // 0x38 (56)
		Difficulty m_difficultInclusionLevel; // 0x3C (60)
		bool m_isBoss; // 0x40 (64)
		bool m_isTrackedPlayer; // 0x41 (65)
	}; // 0x48 (72)
}

