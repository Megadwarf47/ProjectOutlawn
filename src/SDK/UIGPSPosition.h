///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct UIGPSPosition {
		UIGPSPosition() {
			m_latitude = 0.0;
			m_longitude = 0.0;
			m_seaLevelOffset = 0.0;
		};

		double m_latitude; // 0x0 (0)
		double m_longitude; // 0x8 (8)
		double m_seaLevelOffset; // 0x10 (16)
	}; // 0x18 (24)
}

