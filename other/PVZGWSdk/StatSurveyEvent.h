///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>

namespace fb {
	class StatSurveyEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatSurveyEvent"); }
		virtual ~StatSurveyEvent() override {}
		StatSurveyEvent() {
		};

		Guid m_surveyMetricLink; // 0x18 (24)
	}; // 0x28 (40)
}

