///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUICppScreenData.h>
#include <fb/CtrRef.h>
#include <fb/UIElementColor.h>
#include <fb/UIMapWidgetHelperData.h>
#include <fb/Vec2.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UISpectatorTableTopScreenData : public BFUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorTableTopScreenData"); }
		virtual ~UISpectatorTableTopScreenData() override {}
		UISpectatorTableTopScreenData() {
		};

		UIMapWidgetHelperData m_mapWidgetHelperData; // 0x30 (48)
		UIElementColor m_selectedObjectBackgroundColor; // 0x50 (80)
		CtrRef<UIElementFontStyle> m_selectedObjectFont; // 0x70 (112)
		Vec2 m_selectedObjectTextPadding; // 0x78 (120)
		Vec2 m_selectedObjectTextOffset; // 0x80 (128)
	}; // 0x90 (144)
}

