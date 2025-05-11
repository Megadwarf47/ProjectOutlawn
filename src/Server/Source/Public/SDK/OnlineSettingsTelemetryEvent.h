///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct OnlineSettingsTelemetryEvent {
		OnlineSettingsTelemetryEvent() {
			m_enabled = false;
		};

		Array<String> m_realms; // 0x0 (0)
		Array<String> m_scopes; // 0x8 (8)
		String m_module; // 0x10 (16)
		String m_group; // 0x18 (24)
		String m_string; // 0x20 (32)
		bool m_enabled; // 0x28 (40)
	}; // 0x30 (48)
}

