///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct AudioGraphNodePort {
		AudioGraphNodePort() {
			m_unconnectedValue = 0.f;
			m_valueIndex = 0;
			m_isConnected = false;
		};

		float m_unconnectedValue; // 0x0 (0)
		u16 m_valueIndex; // 0x4 (4)
		bool m_isConnected; // 0x6 (6)
	}; // 0x8 (8)
}

