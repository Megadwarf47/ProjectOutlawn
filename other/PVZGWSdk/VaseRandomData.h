///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Types.h>
#include <fb/VaseAISpawnData.h>
#include <fb/VaseRewardSpawnData.h>

namespace fb {
	struct VaseRandomData {
		VaseRandomData() {
			m_countMin = 0;
			m_countMax = 0;
			m_isReward = false;
		};

		s32 m_countMin; // 0x0 (0)
		s32 m_countMax; // 0x4 (4)
		Array<VaseAISpawnData> m_aiData; // 0x8 (8)
		Array<VaseRewardSpawnData> m_rewardData; // 0x10 (16)
		bool m_isReward; // 0x18 (24)
	}; // 0x20 (32)
}

