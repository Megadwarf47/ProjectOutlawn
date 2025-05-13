///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct UIAutoScrollTextSettings {
		UIAutoScrollTextSettings() {
			m_noScrollWaitTime = 1.f;
			m_fullyScrolledWaitTime = 0.5f;
			m_maxScrollTime = 2.f;
			m_pixelsPerSecond = 0.2f;
			m_scrollbackMultiplier = 0.5f;
		};

		float m_noScrollWaitTime; // 0x0 (0)
		float m_fullyScrolledWaitTime; // 0x4 (4)
		float m_maxScrollTime; // 0x8 (8)
		float m_pixelsPerSecond; // 0xC (12)
		float m_scrollbackMultiplier; // 0x10 (16)
	}; // 0x14 (20)
}

