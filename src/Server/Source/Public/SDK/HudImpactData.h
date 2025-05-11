///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct HudImpactData {
		HudImpactData() {
			m_minHealth = 50.f;
			m_maxHealth = 100.f;
			m_minTimeVisible = 0.5f;
			m_maxTimeVisible = 1.f;
			m_enable = false;
		};

		float m_minHealth; // 0x0 (0)
		float m_maxHealth; // 0x4 (4)
		float m_minTimeVisible; // 0x8 (8)
		float m_maxTimeVisible; // 0xC (12)
		bool m_enable; // 0x10 (16)
	}; // 0x14 (20)
}

