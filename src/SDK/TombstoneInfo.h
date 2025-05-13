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
	class AIDestructibleSpawnData;
}

namespace fb {
	struct TombstoneInfo {
		TombstoneInfo() {
			m_spawnChance = 1.f;
		};

		CtrRef<AIDestructibleSpawnData> m_tombstoneData; // 0x0 (0)
		float m_spawnChance; // 0x8 (8)
	}; // 0x10 (16)
}

