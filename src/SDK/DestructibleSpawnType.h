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
	class CoopCharacterData;
}

namespace fb {
	struct DestructibleSpawnType {
		DestructibleSpawnType() {
			m_spawnTime = 15.f;
		};

		CtrRef<CoopCharacterData> m_aiCharacterData; // 0x0 (0)
		float m_spawnTime; // 0x8 (8)
	}; // 0x10 (16)
}

