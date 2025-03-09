///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIBattledashChallengesPageWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattledashChallengesPageWidgetData"); }
		virtual ~UIBattledashChallengesPageWidgetData() override {}
		UIBattledashChallengesPageWidgetData() {
			m_loadingIndicatorTimeout = 2.f;
		};

		float m_loadingIndicatorTimeout; // 0x68 (104)
	}; // 0x70 (112)
}

