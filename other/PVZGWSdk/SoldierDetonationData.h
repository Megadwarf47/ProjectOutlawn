///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SoldierDetonationData {
		SoldierDetonationData() {
			m_angle = 30.f;
			m_radius = 1.f;
			m_soldierDetonationActivationDelay = 0.f;
			m_minSpeedForActivation = 0.f;
			m_hasSoldierDetonation = false;
			m_useAngle = false;
		};

		float m_angle; // 0x0 (0)
		float m_radius; // 0x4 (4)
		float m_soldierDetonationActivationDelay; // 0x8 (8)
		float m_minSpeedForActivation; // 0xC (12)
		bool m_hasSoldierDetonation; // 0x10 (16)
		bool m_useAngle; // 0x11 (17)
	}; // 0x14 (20)
}

