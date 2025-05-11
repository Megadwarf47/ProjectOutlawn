///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/UINametagVisibilityConfiguration.h>

namespace fb {
	struct UINametagBehavior {
		UINametagBehavior() {
			m_closeDistance = 30.f;
			m_magneticToScreen = false;
		};

		float m_closeDistance; // 0x0 (0)
		bool m_magneticToScreen; // 0x4 (4)
		UINametagVisibilityConfiguration m_iconVisibility; // 0x5 (5)
		UINametagVisibilityConfiguration m_nameVisibility; // 0x9 (9)
		UINametagVisibilityConfiguration m_healthVisibility; // 0xD (13)
		UINametagVisibilityConfiguration m_distanceVisibility; // 0x11 (17)
	}; // 0x18 (24)
}

