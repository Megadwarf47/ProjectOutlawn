///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RewardSpawnData.h>
#include <fb/Types.h>

namespace fb {
	struct VaseRewardSpawnData {
		VaseRewardSpawnData() {
			m_probability = 0;
			m_amount = 0;
		};

		RewardSpawnData m_rewardSpawn; // 0x0 (0)
		s32 m_probability; // 0x4 (4)
		s32 m_amount; // 0x8 (8)
	}; // 0xC (12)
}

