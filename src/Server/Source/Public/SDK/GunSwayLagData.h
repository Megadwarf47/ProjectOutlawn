///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct GunSwayLagData {
		GunSwayLagData() {
			m_moveStrafeModifier = 0.f;
			m_moveForwardModifier = 0.f;
			m_rotateYawModifier = 0.f;
			m_rotatePitchModifier = 0.f;
			m_releaseModifier = 0.f;
		};

		float m_moveStrafeModifier; // 0x0 (0)
		float m_moveForwardModifier; // 0x4 (4)
		float m_rotateYawModifier; // 0x8 (8)
		float m_rotatePitchModifier; // 0xC (12)
		float m_releaseModifier; // 0x10 (16)
	}; // 0x14 (20)
}

