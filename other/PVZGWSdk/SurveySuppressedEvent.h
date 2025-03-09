///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>
#include <fb/String.h>

namespace fb {
	class SurveySuppressedEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SurveySuppressedEvent"); }
		virtual ~SurveySuppressedEvent() override {}
		SurveySuppressedEvent() {
		};

		String m_suppressReason; // 0x18 (24)
	}; // 0x20 (32)
}

