///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct UIAirRadarConfiguration {
		UIAirRadarConfiguration() {
			m_radarSensitivity = 5.f;
			m_heatSensitivity = 5.f;
			m_trackLaserPaintedObjects = true;
		};

		float m_radarSensitivity; // 0x0 (0)
		float m_heatSensitivity; // 0x4 (4)
		bool m_trackLaserPaintedObjects; // 0x8 (8)
	}; // 0xC (12)
}

