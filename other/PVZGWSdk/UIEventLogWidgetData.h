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
	class UIElementFontStyle;
}

namespace fb {
	class UIEventLogWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIEventLogWidgetData"); }
		virtual ~UIEventLogWidgetData() override {}
		UIEventLogWidgetData() {
			m_lineSpacing = 30;
			m_nudgeDownDistance = 24.f;
			m_maxTrackedLines = 30;
			m_underPopulatedLineExpiryTime = 2.f;
			m_overPopulatedLineExpiryTime = 1.f;
			m_lineAddCooldown = 0.5f;
			m_fadeTime = 0.25f;
		};

		CtrRef<UIElementFontStyle> m_font; // 0x68 (104)
		u32 m_lineSpacing; // 0x70 (112)
		UIElementColor m_killWeaponColor; // 0x80 (128)
		float m_nudgeDownDistance; // 0xA0 (160)
		u32 m_maxTrackedLines; // 0xA4 (164)
		float m_underPopulatedLineExpiryTime; // 0xA8 (168)
		float m_overPopulatedLineExpiryTime; // 0xAC (172)
		float m_lineAddCooldown; // 0xB0 (176)
		float m_fadeTime; // 0xB4 (180)
	}; // 0xC0 (192)
}

