///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SensitivityAtVelocity {
		SensitivityAtVelocity() {
			m_steeringSensitivity = 1.f;
			m_velocity = 1.f;
		};

		float m_steeringSensitivity; // 0x0 (0)
		float m_velocity; // 0x4 (4)
	}; // 0x8 (8)
}

