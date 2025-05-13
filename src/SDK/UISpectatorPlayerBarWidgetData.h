///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UISpectatorWidgetData.h>

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
}

namespace fb {
	class UISpectatorPlayerBarWidgetData : public UISpectatorWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorPlayerBarWidgetData"); }
		virtual ~UISpectatorPlayerBarWidgetData() override {}
		UISpectatorPlayerBarWidgetData() {
		};

		CtrRef<UIElementFillData> m_highlightFill; // 0x68 (104)
		CtrRef<UIElementFontStyle> m_highlightFontStyle; // 0x70 (112)
	}; // 0x78 (120)
}

