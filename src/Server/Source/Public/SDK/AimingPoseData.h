///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct AimingPoseData {
		AimingPoseData() {
			m_minimumPitch = -85.f;
			m_maximumPitch = 85.f;
			m_targetingFov = -1.f;
			m_aimSteadiness = 0.f;
			m_speedMultiplier = 1.f;
			m_recoilMultiplier = 1.f;
		};

		float m_minimumPitch; // 0x0 (0)
		float m_maximumPitch; // 0x4 (4)
		float m_targetingFov; // 0x8 (8)
		float m_aimSteadiness; // 0xC (12)
		float m_speedMultiplier; // 0x10 (16)
		float m_recoilMultiplier; // 0x14 (20)
	}; // 0x18 (24)
}

