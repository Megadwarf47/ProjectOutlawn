///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ScoringHandlerData.h>

namespace fb {
	class SuppressionScoringHandlerData : public ScoringHandlerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SuppressionScoringHandlerData"); }
		virtual ~SuppressionScoringHandlerData() override {}
		SuppressionScoringHandlerData() {
			m_suppressionAmountLimit = 0.15f;
			m_timeSinceSuppressionLimit = 2.f;
		};

		float m_suppressionAmountLimit; // 0x10 (16)
		float m_timeSinceSuppressionLimit; // 0x14 (20)
	}; // 0x18 (24)
}

