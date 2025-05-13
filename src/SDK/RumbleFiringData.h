///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct RumbleFiringData {
		RumbleFiringData() {
			m_lowRumble = 0.f;
			m_highRumble = 0.f;
			m_rumbleDuration = 0.2f;
		};

		float m_lowRumble; // 0x0 (0)
		float m_highRumble; // 0x4 (4)
		float m_rumbleDuration; // 0x8 (8)
	}; // 0xC (12)
}

