///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ScoringHandlerData.h>

namespace fb {
	class AvengerScoringHandlerData : public ScoringHandlerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AvengerScoringHandlerData"); }
		virtual ~AvengerScoringHandlerData() override {}
		AvengerScoringHandlerData() {
			m_avengerKillTimeout = 2.f;
		};

		float m_avengerKillTimeout; // 0x10 (16)
	}; // 0x18 (24)
}

