///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIElementColor.h>
#include <fb/UISpectatorWidgetData.h>

namespace fb {
	class UIElementFontStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UISpectatorSquadsWidgetData : public UISpectatorWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorSquadsWidgetData"); }
		virtual ~UISpectatorSquadsWidgetData() override {}
		UISpectatorSquadsWidgetData() {
			m_squadNarrowWidth = 250.f;
			m_squadSpacing = 10.f;
			m_squadTeamSpacing = 10.f;
			m_playerSpacingY = 4.f;
			m_animTime = 0.15f;
			m_squadboxHeaderUsesTeamColor = true;
			m_squadboxExtensionUsesTeamColor = true;
		};

		CtrRef<UIWidgetBlueprint> m_squadTemplate; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_playerTemplate; // 0x70 (112)
		UIElementColor m_disabledKitIconColor; // 0x80 (128)
		CtrRef<UIElementFontStyle> m_disabledPlayerFontStyle; // 0xA0 (160)
		float m_squadNarrowWidth; // 0xA8 (168)
		float m_squadSpacing; // 0xAC (172)
		float m_squadTeamSpacing; // 0xB0 (176)
		float m_playerSpacingY; // 0xB4 (180)
		float m_animTime; // 0xB8 (184)
		bool m_squadboxHeaderUsesTeamColor; // 0xBC (188)
		bool m_squadboxExtensionUsesTeamColor; // 0xBD (189)
	}; // 0xC0 (192)
}

