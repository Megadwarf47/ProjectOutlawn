///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/UIBattledashDetailPane.h>

namespace fb {
	class UIElementFontStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIBattledashChallengeDetailsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattledashChallengeDetailsWidgetData"); }
		virtual ~UIBattledashChallengeDetailsWidgetData() override {}
		UIBattledashChallengeDetailsWidgetData() {
		};

		Array<UIBattledashDetailPane> m_challengeDetailsItems; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_listPaneWidget; // 0x70 (112)
		CtrRef<UIElementFontStyle> m_infoFont; // 0x78 (120)
	}; // 0x80 (128)
}

