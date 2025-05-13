///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/OnlineSettingsTelemetryEvent.h>
#include <fb/Types.h>

namespace fb {
	struct MetricsTelemetryOnlineSettings {
		MetricsTelemetryOnlineSettings() {
			m_enableTelemetry = false;
		};

		Array<String> m_enabledRealms; // 0x0 (0)
		Array<OnlineSettingsTelemetryEvent> m_enabledDisabledEvents; // 0x8 (8)
		bool m_enableTelemetry; // 0x10 (16)
	}; // 0x18 (24)
}

