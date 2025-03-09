///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricAggregate.h>

namespace fb {
	class ScoreAggregate : public MetricAggregate {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScoreAggregate"); }
		virtual ~ScoreAggregate() override {}
		ScoreAggregate() {
			m_totalScore = 0.f;
		};

		float m_totalScore; // 0x18 (24)
	}; // 0x20 (32)
}

