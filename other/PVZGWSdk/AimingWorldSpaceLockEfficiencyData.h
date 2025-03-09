///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct AimingWorldSpaceLockEfficiencyData {
		AimingWorldSpaceLockEfficiencyData() {
			m_efficiencyYaw = 0.f;
			m_efficiencyPitch = 0.f;
			m_efficiencyYawZoom = 0.f;
			m_efficiencyPitchZoom = 0.f;
		};

		float m_efficiencyYaw; // 0x0 (0)
		float m_efficiencyPitch; // 0x4 (4)
		float m_efficiencyYawZoom; // 0x8 (8)
		float m_efficiencyPitchZoom; // 0xC (12)
	}; // 0x10 (16)
}

