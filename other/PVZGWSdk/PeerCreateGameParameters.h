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
	class GameParametersData;
}

namespace fb {
	struct PeerCreateGameParameters {
		PeerCreateGameParameters() {
			m_playerCapacity = 0;
		};

		CtrRef<GameParametersData> m_base; // 0x0 (0)
		u32 m_playerCapacity; // 0x8 (8)
	}; // 0x10 (16)
}

