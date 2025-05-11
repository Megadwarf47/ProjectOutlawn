///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>

namespace fb {
	class FramerateHistogramPerformanceEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FramerateHistogramPerformanceEvent"); }
		virtual ~FramerateHistogramPerformanceEvent() override {}
		FramerateHistogramPerformanceEvent() {
			m_spikeAverage = 0.f;
			m_below5 = 0.f;
			m_below10 = 0.f;
			m_below15 = 0.f;
			m_below20 = 0.f;
			m_below25 = 0.f;
			m_below30 = 0.f;
			m_below35 = 0.f;
			m_below40 = 0.f;
			m_below45 = 0.f;
			m_below50 = 0.f;
			m_below55 = 0.f;
			m_below60 = 0.f;
			m_above60 = 0.f;
		};

		float m_spikeAverage; // 0x18 (24)
		float m_below5; // 0x1C (28)
		float m_below10; // 0x20 (32)
		float m_below15; // 0x24 (36)
		float m_below20; // 0x28 (40)
		float m_below25; // 0x2C (44)
		float m_below30; // 0x30 (48)
		float m_below35; // 0x34 (52)
		float m_below40; // 0x38 (56)
		float m_below45; // 0x3C (60)
		float m_below50; // 0x40 (64)
		float m_below55; // 0x44 (68)
		float m_below60; // 0x48 (72)
		float m_above60; // 0x4C (76)
		Guid m_performanceLink; // 0x50 (80)
	}; // 0x60 (96)
}

