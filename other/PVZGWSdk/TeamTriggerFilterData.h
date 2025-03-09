///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TeamTriggerFilterData {
		TeamTriggerFilterData() {
			m_triggerForFriendly = false;
			m_triggerForNeutral = false;
			m_triggerForHostile = false;
		};

		bool m_triggerForFriendly; // 0x0 (0)
		bool m_triggerForNeutral; // 0x1 (1)
		bool m_triggerForHostile; // 0x2 (2)
	}; // 0x3 (3)
}

