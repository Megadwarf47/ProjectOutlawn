///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct MixGroupPropertyParameters {
		MixGroupPropertyParameters() {
			m_property = 0;
			m_minOffset = 0.f;
			m_maxOffset = 0.f;
			m_defaultValue = 0.f;
			m_enableOffsetMinMax = false;
			m_overrideDefaultValue = false;
		};

		u32 m_property; // 0x0 (0)
		float m_minOffset; // 0x4 (4)
		float m_maxOffset; // 0x8 (8)
		float m_defaultValue; // 0xC (12)
		bool m_enableOffsetMinMax; // 0x10 (16)
		bool m_overrideDefaultValue; // 0x11 (17)
	}; // 0x14 (20)
}

