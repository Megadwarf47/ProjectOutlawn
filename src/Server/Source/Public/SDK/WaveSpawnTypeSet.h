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
	class WaveSpawnType;
}

namespace fb {
	struct WaveSpawnTypeSet {
		WaveSpawnTypeSet() {
			m_maxSpawnLimit = 0;
			m_minSpawnLimit = 0;
		};

		CtrRef<WaveSpawnType> m_waveSpawnType; // 0x0 (0)
		s32 m_maxSpawnLimit; // 0x8 (8)
		s32 m_minSpawnLimit; // 0xC (12)
	}; // 0x10 (16)
}

