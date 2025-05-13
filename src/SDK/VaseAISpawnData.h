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
	class AISpawnData;
}

namespace fb {
	struct VaseAISpawnData {
		VaseAISpawnData() {
			m_probability = 0;
		};

		CtrRef<AISpawnData> m_aiSpawn; // 0x0 (0)
		s32 m_probability; // 0x8 (8)
	}; // 0x10 (16)
}

