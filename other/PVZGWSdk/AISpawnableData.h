///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class AISpawnData;
	class BoostData;
}

namespace fb {
	struct AISpawnableData {
		AISpawnableData() {
		};

		CtrRef<AISpawnData> m_aiSpawn; // 0x0 (0)
		CtrRef<BoostData> m_consumable; // 0x8 (8)
	}; // 0x10 (16)
}

