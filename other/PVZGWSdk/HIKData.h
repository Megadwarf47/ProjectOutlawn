///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct HIKData {
		HIKData() {
			m_reachT = 1.f;
			m_reachR = 1.f;
			m_pull = 0.f;
			m_resist = 0.f;
		};

		float m_reachT; // 0x0 (0)
		float m_reachR; // 0x4 (4)
		float m_pull; // 0x8 (8)
		float m_resist; // 0xC (12)
	}; // 0x10 (16)
}

