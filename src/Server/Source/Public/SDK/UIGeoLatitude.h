///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct UIGeoLatitude {
		UIGeoLatitude() {
			m_degrees = 0;
			m_minuites = 0;
			m_seconds = 0;
		};

		s32 m_degrees; // 0x0 (0)
		s32 m_minuites; // 0x4 (4)
		s32 m_seconds; // 0x8 (8)
	}; // 0xC (12)
}

