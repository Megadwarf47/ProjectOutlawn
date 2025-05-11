///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct QualityScalableFloat {
		QualityScalableFloat() {
			m_low = 0.f;
			m_medium = 0.f;
			m_high = 0.f;
			m_ultra = 0.f;
		};

		float m_low; // 0x0 (0)
		float m_medium; // 0x4 (4)
		float m_high; // 0x8 (8)
		float m_ultra; // 0xC (12)
	}; // 0x10 (16)
}

