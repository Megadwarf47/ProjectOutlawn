///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Types.h>

namespace fb {
	struct ServerTransactionTelemetryOnlineSettings {
		ServerTransactionTelemetryOnlineSettings() {
			m_enableTelemetry = false;
			m_enableNonPlayerEvents = true;
			m_enablePlayerEvents = true;
			m_enablePlayerStates = true;
		};

		Array<String> m_enabledCategories; // 0x0 (0)
		Array<String> m_disabledEvents; // 0x8 (8)
		bool m_enableTelemetry; // 0x10 (16)
		bool m_enableNonPlayerEvents; // 0x11 (17)
		bool m_enablePlayerEvents; // 0x12 (18)
		bool m_enablePlayerStates; // 0x13 (19)
	}; // 0x18 (24)
}

