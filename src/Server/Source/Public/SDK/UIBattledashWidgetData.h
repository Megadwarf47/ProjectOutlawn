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
#include <fb/UIBattledashIndicatorData.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIBattledashWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattledashWidgetData"); }
		virtual ~UIBattledashWidgetData() override {}
		UIBattledashWidgetData() {
			m_paneSpacing = 1.f;
			m_iconPadding = 2.f;
			m_iconNumberPadding = 1.f;
			m_overrideLabelWidth = 0.f;
			m_loadingDisplayUpdateFrequency = 0.5f;
			m_notificationDisplayTime = 10.f;
			m_tabContextTimeout = 8.f;
			m_notificationAnimationTime = 0.3f;
			m_notificationVOffset = 30.f;
			m_inGame = 1;
			m_spinAngle = 4.f;
			m_startPointX = 200.f;
			m_startPointY = 50.f;
			m_rotation = 1.f;
			m_animationSpeed = 0.5f;
			m_drawPanesInGame = true;
		};

		float m_paneSpacing; // 0x68 (104)
		float m_iconPadding; // 0x6C (108)
		UIElementColor m_iconColor; // 0x70 (112)
		UIElementColor m_iconHighlightColor; // 0x90 (144)
		UIElementColor m_paneBackgroundColor; // 0xB0 (176)
		float m_iconNumberPadding; // 0xD0 (208)
		float m_overrideLabelWidth; // 0xD4 (212)
		CtrRef<UIElementFontStyle> m_indicatorFont; // 0xD8 (216)
		CtrRef<UIElementFontStyle> m_indicatorHighlightFont; // 0xE0 (224)
		Array<UIBattledashIndicatorData> m_indicators; // 0xE8 (232)
		Array<UIBattledashIndicatorData> m_gen3Indicators; // 0xF0 (240)
		float m_loadingDisplayUpdateFrequency; // 0xF8 (248)
		CtrRef<UIElementFontStyle> m_notificationFont; // 0x100 (256)
		float m_notificationDisplayTime; // 0x108 (264)
		float m_tabContextTimeout; // 0x10C (268)
		float m_notificationAnimationTime; // 0x110 (272)
		float m_notificationVOffset; // 0x114 (276)
		u32 m_inGame; // 0x118 (280)
		float m_spinAngle; // 0x11C (284)
		float m_startPointX; // 0x120 (288)
		float m_startPointY; // 0x124 (292)
		float m_rotation; // 0x128 (296)
		float m_animationSpeed; // 0x12C (300)
		bool m_drawPanesInGame; // 0x130 (304)
	}; // 0x140 (320)
}

