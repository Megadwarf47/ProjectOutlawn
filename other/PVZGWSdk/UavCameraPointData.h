///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct UavCameraPointData {
		UavCameraPointData() {
			m_minTime = 0.f;
			m_maxTime = 0.f;
			m_speed = 0.f;
			m_accelerationTime = 0.f;
		};

		float m_minTime; // 0x0 (0)
		float m_maxTime; // 0x4 (4)
		float m_speed; // 0x8 (8)
		float m_accelerationTime; // 0xC (12)
	}; // 0x10 (16)
}

