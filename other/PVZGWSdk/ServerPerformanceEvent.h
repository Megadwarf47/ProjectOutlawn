///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>

namespace fb {
	class ServerPerformanceEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ServerPerformanceEvent"); }
		virtual ~ServerPerformanceEvent() override {}
		ServerPerformanceEvent() {
			m_cpuAverage = 0.f;
			m_cpuMemory = 0.f;
			m_received = 0;
			m_sent = 0;
			m_receivedAverage = 0.f;
			m_sentAverage = 0.f;
		};

		float m_cpuAverage; // 0x18 (24)
		float m_cpuMemory; // 0x1C (28)
		u32 m_received; // 0x20 (32)
		u32 m_sent; // 0x24 (36)
		float m_receivedAverage; // 0x28 (40)
		float m_sentAverage; // 0x2C (44)
	}; // 0x30 (48)
}

