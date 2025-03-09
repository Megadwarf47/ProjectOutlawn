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
	class EnterVehicleSurveyEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnterVehicleSurveyEvent"); }
		virtual ~EnterVehicleSurveyEvent() override {}
		EnterVehicleSurveyEvent() {
		};

		String m_vehicleName; // 0x18 (24)
		Guid m_surveyMetricLink; // 0x20 (32)
	}; // 0x30 (48)
}

