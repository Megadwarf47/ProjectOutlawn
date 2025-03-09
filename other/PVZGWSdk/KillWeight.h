///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct KillWeight {
		KillWeight() {
			m_lowIntenseWeight = 0.f;
			m_highIntenseWeight = 0.f;
			m_coolDownTime = 0.f;
		};

		float m_lowIntenseWeight; // 0x0 (0)
		float m_highIntenseWeight; // 0x4 (4)
		float m_coolDownTime; // 0x8 (8)
	}; // 0xC (12)
}

