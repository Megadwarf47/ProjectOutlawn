///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ScoringHandlerData.h>

namespace fb {
	class CapturePointScoringHandlerData : public ScoringHandlerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CapturePointScoringHandlerData"); }
		virtual ~CapturePointScoringHandlerData() override {}
		CapturePointScoringHandlerData() {
			m_squadCappingBonus = 0.f;
			m_capturePointLeadTickTime = 30.f;
			m_capturePointLeadLimit = 1;
			m_captureDominationTickTime = 20.f;
			m_captureContributionTickLimit = 10.f;
			m_captureContributionLimit = 20.f;
		};

		float m_squadCappingBonus; // 0x10 (16)
		float m_capturePointLeadTickTime; // 0x14 (20)
		u32 m_capturePointLeadLimit; // 0x18 (24)
		float m_captureDominationTickTime; // 0x1C (28)
		float m_captureContributionTickLimit; // 0x20 (32)
		float m_captureContributionLimit; // 0x24 (36)
	}; // 0x28 (40)
}

