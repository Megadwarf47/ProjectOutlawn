///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct PlatformScalableBool {
		PlatformScalableBool() {
			m_default = false;
			m_xenon = false;
			m_ps3 = false;
			m_gen4a = false;
			m_gen4b = false;
		};

		bool m_default; // 0x0 (0)
		bool m_xenon; // 0x1 (1)
		bool m_ps3; // 0x2 (2)
		bool m_gen4a; // 0x3 (3)
		bool m_gen4b; // 0x4 (4)
	}; // 0x5 (5)
}

