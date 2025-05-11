///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct LookConstraintsData {
		LookConstraintsData() {
			m_minLookYaw = -90.f;
			m_maxLookYaw = 90.f;
			m_minLookPitch = -45.f;
			m_maxLookPitch = 45.f;
		};

		float m_minLookYaw; // 0x0 (0)
		float m_maxLookYaw; // 0x4 (4)
		float m_minLookPitch; // 0x8 (8)
		float m_maxLookPitch; // 0xC (12)
	}; // 0x10 (16)
}

