///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct InputThrottle {
		InputThrottle() {
			m_forwardSpeedSupressionAmount = 1.f;
			m_backwardSpeedSupressionAmount = 1.f;
			m_sideSpeedSupressionAmount = 0.f;
			m_ignoreBrakeSpeedThreshold = 20.f;
			m_enabled = false;
		};

		float m_forwardSpeedSupressionAmount; // 0x0 (0)
		float m_backwardSpeedSupressionAmount; // 0x4 (4)
		float m_sideSpeedSupressionAmount; // 0x8 (8)
		float m_ignoreBrakeSpeedThreshold; // 0xC (12)
		bool m_enabled; // 0x10 (16)
	}; // 0x14 (20)
}

