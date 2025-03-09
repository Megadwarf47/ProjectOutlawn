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
	class SurveyEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SurveyEvent"); }
		virtual ~SurveyEvent() override {}
		SurveyEvent() {
			m_answerQuestion1 = 0;
			m_answerQuestion2 = 0;
			m_answerQuestion3 = 0;
			m_answerQuestion4 = 0;
			m_answerQuestion5 = 0;
		};

		String m_surveyName; // 0x18 (24)
		s32 m_answerQuestion1; // 0x20 (32)
		s32 m_answerQuestion2; // 0x24 (36)
		s32 m_answerQuestion3; // 0x28 (40)
		s32 m_answerQuestion4; // 0x2C (44)
		s32 m_answerQuestion5; // 0x30 (48)
		String m_freeTextField; // 0x38 (56)
		Guid m_surveyMetricLink; // 0x40 (64)
	}; // 0x50 (80)
}

