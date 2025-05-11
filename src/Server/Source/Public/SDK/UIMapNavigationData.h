///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec2.h>

namespace fb {
	struct UIMapNavigationData {
		UIMapNavigationData() {
			m_nearestZoomRange = 200.f;
			m_manualViewRange = 500.f;
			m_panSpeed = 170.f;
			m_useAutoView = true;
		};

		float m_nearestZoomRange; // 0x0 (0)
		Vec2 m_manualViewCenter; // 0x4 (4)
		float m_manualViewRange; // 0xC (12)
		float m_panSpeed; // 0x10 (16)
		bool m_useAutoView; // 0x14 (20)
	}; // 0x18 (24)
}

