///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct QualityScalableInt {
		QualityScalableInt() {
			m_low = 0;
			m_medium = 0;
			m_high = 0;
			m_ultra = 0;
		};

		s32 m_low; // 0x0 (0)
		s32 m_medium; // 0x4 (4)
		s32 m_high; // 0x8 (8)
		s32 m_ultra; // 0xC (12)
	}; // 0x10 (16)
}

