///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct PlatformExclusions {
		PlatformExclusions() {
			m_pS3 = false;
			m_pS4 = false;
			m_xBox360 = false;
			m_xBoxOne = false;
			m_win32 = false;
		};

		bool m_pS3; // 0x0 (0)
		bool m_pS4; // 0x1 (1)
		bool m_xBox360; // 0x2 (2)
		bool m_xBoxOne; // 0x3 (3)
		bool m_win32; // 0x4 (4)
	}; // 0x5 (5)
}

