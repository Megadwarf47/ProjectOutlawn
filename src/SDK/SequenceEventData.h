///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EventSpec.h>
#include <fb/Types.h>

namespace fb {
	struct SequenceEventData {
		SequenceEventData() {
			m_time = 0;
		};

		EventSpec m_event; // 0x0 (0)
		s32 m_time; // 0x4 (4)
	}; // 0x8 (8)
}

