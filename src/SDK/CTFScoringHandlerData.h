///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ScoringHandlerData.h>

namespace fb {
	class CTFScoringHandlerData : public ScoringHandlerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CTFScoringHandlerData"); }
		virtual ~CTFScoringHandlerData() override {}
		CTFScoringHandlerData() {
			m_maxTeams = 2;
			m_pickUpAssistRadius = 10.f;
			m_captureAssistRadius = 10.f;
			m_enemyThreatRadius = 10.f;
			m_enemySuppressionTimeout = 10.f;
		};

		s32 m_maxTeams; // 0x10 (16)
		float m_pickUpAssistRadius; // 0x14 (20)
		float m_captureAssistRadius; // 0x18 (24)
		float m_enemyThreatRadius; // 0x1C (28)
		float m_enemySuppressionTimeout; // 0x20 (32)
	}; // 0x28 (40)
}

