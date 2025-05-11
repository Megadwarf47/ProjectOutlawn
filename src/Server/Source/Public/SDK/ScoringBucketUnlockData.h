///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BasicUnlockInfo.h>
#include <fb/Types.h>

namespace fb {
	struct ScoringBucketUnlockData {
		ScoringBucketUnlockData() {
			m_pointsNeeded = 0;
		};

		u32 m_pointsNeeded; // 0x0 (0)
		BasicUnlockInfo m_unlockInfo; // 0x8 (8)
	}; // 0x40 (64)
}

