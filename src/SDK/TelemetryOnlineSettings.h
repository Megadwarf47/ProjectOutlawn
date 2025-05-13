///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricsTelemetryOnlineSettings.h>
#include <fb/ServerTransactionTelemetryOnlineSettings.h>
#include <fb/Types.h>

namespace fb {
	struct TelemetryOnlineSettings {
		TelemetryOnlineSettings() {
			m_downloadSettings = true;
			m_enableTelemetry = false;
		};

		MetricsTelemetryOnlineSettings m_metricsSettings; // 0x0 (0)
		ServerTransactionTelemetryOnlineSettings m_peerHostedServerTransactionSettings; // 0x18 (24)
		ServerTransactionTelemetryOnlineSettings m_dedicatedServerTransactionSettings; // 0x30 (48)
		bool m_downloadSettings; // 0x48 (72)
		bool m_enableTelemetry; // 0x49 (73)
	}; // 0x50 (80)
}

