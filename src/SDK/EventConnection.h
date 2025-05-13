///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EventConnectionTargetType.h>
#include <fb/EventSpec.h>

namespace fb {
	class DataContainer;
}

namespace fb {
	struct EventConnection {
		EventConnection() {
			m_targetType = EventConnectionTargetType::EventConnectionTargetType_Invalid;
		};

		CtrRef<DataContainer> m_source; // 0x0 (0)
		CtrRef<DataContainer> m_target; // 0x8 (8)
		EventSpec m_sourceEvent; // 0x10 (16)
		EventSpec m_targetEvent; // 0x14 (20)
		EventConnectionTargetType m_targetType; // 0x18 (24)
	}; // 0x20 (32)
}

