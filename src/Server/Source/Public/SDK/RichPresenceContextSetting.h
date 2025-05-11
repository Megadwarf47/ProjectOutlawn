///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class RichPresenceContext;
	class RichPresenceContextValue;
}

namespace fb {
	struct RichPresenceContextSetting {
		RichPresenceContextSetting() {
		};

		CtrRef<RichPresenceContext> m_context; // 0x0 (0)
		CtrRef<RichPresenceContextValue> m_value; // 0x8 (8)
	}; // 0x10 (16)
}

