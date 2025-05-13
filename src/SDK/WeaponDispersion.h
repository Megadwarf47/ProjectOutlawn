///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/FiringDispersionData.h>
#include <fb/Types.h>

namespace fb {
	struct WeaponDispersion {
		WeaponDispersion() {
			m_jumpDispersionAngle = 0.f;
			m_proneTransitionDispersionAngle = 0.f;
			m_moveDispersionAngle = 0.f;
			m_moveZoomedDispersionAngle = 0.f;
			m_decreasePerSecond = 5.f;
		};

		FiringDispersionData m_standDispersion; // 0x0 (0)
		FiringDispersionData m_crouchDispersion; // 0x18 (24)
		FiringDispersionData m_proneDispersion; // 0x30 (48)
		float m_jumpDispersionAngle; // 0x48 (72)
		float m_proneTransitionDispersionAngle; // 0x4C (76)
		float m_moveDispersionAngle; // 0x50 (80)
		float m_moveZoomedDispersionAngle; // 0x54 (84)
		float m_decreasePerSecond; // 0x58 (88)
	}; // 0x5C (92)
}

