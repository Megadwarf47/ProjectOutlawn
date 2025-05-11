///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UIElementScrollbarStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UISPFriendsLeaderboardWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISPFriendsLeaderboardWidgetData"); }
		virtual ~UISPFriendsLeaderboardWidgetData() override {}
		UISPFriendsLeaderboardWidgetData() {
			m_scrollBarWidth = 10;
			m_scrollBarMargin = 3;
		};

		CtrRef<UIWidgetBlueprint> m_rowTemplate; // 0x68 (104)
		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0x70 (112)
		UIElementColor m_ownScoreColor; // 0x80 (128)
		s32 m_scrollBarWidth; // 0xA0 (160)
		s32 m_scrollBarMargin; // 0xA4 (164)
	}; // 0xB0 (176)
}

