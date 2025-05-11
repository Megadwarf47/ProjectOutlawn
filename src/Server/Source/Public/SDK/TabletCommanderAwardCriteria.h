///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderAwardCriteria {
		TabletCommanderAwardCriteria() {
			m_completionValue = 0.f;
			m_originalValue = 0.f;
			m_absoluteValue = 0.f;
		};

		String m_description; // 0x0 (0)
		float m_completionValue; // 0x8 (8)
		float m_originalValue; // 0xC (12)
		float m_absoluteValue; // 0x10 (16)
	}; // 0x18 (24)
}

