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
	class UIBattledashFriendDetailsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattledashFriendDetailsWidgetData"); }
		virtual ~UIBattledashFriendDetailsWidgetData() override {}
		UIBattledashFriendDetailsWidgetData() {
			m_loadingIndicatorTimeout = 8.f;
		};

		Array<UIBattledashDetailPane> m_friendDetailsItems; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_listPaneWidget; // 0x70 (112)
		CtrRef<UIElementFontStyle> m_infoFont; // 0x78 (120)
		float m_loadingIndicatorTimeout; // 0x80 (128)
	}; // 0x88 (136)
}

