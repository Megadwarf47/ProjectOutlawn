///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct DynamicSpeedModiferSphereData {
		DynamicSpeedModiferSphereData() {
			m_radius = 4.f;
			m_speedMultiplierValue = 1.f;
			m_effectTime = 5.f;
			m_selfDestructOnTriggerDelay = -1.f;
			m_applyGoopedState = false;
		};

		float m_radius; // 0x0 (0)
		float m_speedMultiplierValue; // 0x4 (4)
		float m_effectTime; // 0x8 (8)
		float m_selfDestructOnTriggerDelay; // 0xC (12)
		bool m_applyGoopedState; // 0x10 (16)
	}; // 0x14 (20)
}

