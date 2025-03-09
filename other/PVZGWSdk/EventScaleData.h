///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatEvent.h>
#include <fb/Types.h>

namespace fb {
	struct EventScaleData {
		EventScaleData() {
			m_event = StatEvent::StatEvent_Invalid;
			m_scale = 1.f;
		};

		StatEvent m_event; // 0x0 (0)
		float m_scale; // 0x4 (4)
	}; // 0x8 (8)
}

