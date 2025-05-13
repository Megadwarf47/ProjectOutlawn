///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class ServerMetricsSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ServerMetricsSettings"); }
		virtual ~ServerMetricsSettings() override {}
		ServerMetricsSettings() {
			m_enabled = true;
			m_dbxReportEnabled = false;
			m_tickTelemetryEnabled = false;
			m_developmentTelemetryEnabled = true;
			m_performanceTelemetryEnabled = false;
			m_juiceTelemetryEnabled = false;
			m_performanceProfileStateEnabled = false;
			m_transactionTelemetryEnabled = false;
			m_compressTransactions = true;
		};

		String m_reportName; // 0x10 (16)
		String m_logSettingsPrefix; // 0x18 (24)
		bool m_enabled; // 0x20 (32)
		bool m_dbxReportEnabled; // 0x21 (33)
		bool m_tickTelemetryEnabled; // 0x22 (34)
		bool m_developmentTelemetryEnabled; // 0x23 (35)
		bool m_performanceTelemetryEnabled; // 0x24 (36)
		bool m_juiceTelemetryEnabled; // 0x25 (37)
		bool m_performanceProfileStateEnabled; // 0x26 (38)
		bool m_transactionTelemetryEnabled; // 0x27 (39)
		bool m_compressTransactions; // 0x28 (40)
	}; // 0x30 (48)
}

