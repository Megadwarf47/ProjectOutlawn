///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct QualityScalableBool {
		QualityScalableBool() {
			m_low = false;
			m_medium = false;
			m_high = false;
			m_ultra = false;
		};

		bool m_low; // 0x0 (0)
		bool m_medium; // 0x1 (1)
		bool m_high; // 0x2 (2)
		bool m_ultra; // 0x3 (3)
	}; // 0x4 (4)
}

