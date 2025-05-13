///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class RewardDestructibleSpawnData;
}

namespace fb {
	struct RewardInfo {
		RewardInfo() {
			m_spawnChance = 1.f;
		};

		CtrRef<RewardDestructibleSpawnData> m_rewardData; // 0x0 (0)
		float m_spawnChance; // 0x8 (8)
	}; // 0x10 (16)
}

