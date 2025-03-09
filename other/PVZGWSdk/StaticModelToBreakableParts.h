///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct StaticModelToBreakableParts {
		StaticModelToBreakableParts() {
			m_staticModelIndex = 0;
			m_breakablePartStartIndex = 0;
			m_breakablePartCount = 0;
		};

		u32 m_staticModelIndex; // 0x0 (0)
		u32 m_breakablePartStartIndex; // 0x4 (4)
		u32 m_breakablePartCount; // 0x8 (8)
	}; // 0xC (12)
}

