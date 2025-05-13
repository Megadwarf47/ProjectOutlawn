///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>

namespace fb {
	class NetworkPerformanceEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NetworkPerformanceEvent"); }
		virtual ~NetworkPerformanceEvent() override {}
		NetworkPerformanceEvent() {
			m_received = 0;
			m_sent = 0;
			m_receivedAverage = 0.f;
			m_sentAverage = 0.f;
		};

		u32 m_received; // 0x18 (24)
		u32 m_sent; // 0x1C (28)
		float m_receivedAverage; // 0x20 (32)
		float m_sentAverage; // 0x24 (36)
		Guid m_performanceLink; // 0x28 (40)
	}; // 0x38 (56)
}

