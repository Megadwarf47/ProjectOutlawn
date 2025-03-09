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
#include <fb/UIScoreboardColumnStyle.h>

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
	class UIElementTableStyle;
}

namespace fb {
	class UIScoreboardWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIScoreboardWidgetData"); }
		virtual ~UIScoreboardWidgetData() override {}
		UIScoreboardWidgetData() {
			m_cellSpacing = 0;
			m_teamNameLeftPadding = 6.f;
			m_scrollbarWidth = 0;
			m_scrollbarMargin = 5;
			m_endOfRoundPreScrollTime = 1.f;
			m_endOfRoundScrollTime = 2.f;
			m_endOfRoundScrollDA = -100.f;
			m_endOfRoundScrollDB = -100.f;
			m_numberColumnStyle = UIScoreboardColumnStyle(25.f, UIElementAlignment::UIElementAlignment_Center, 0.f, true);
			m_rankColumnStyle = UIScoreboardColumnStyle(35.f, UIElementAlignment::UIElementAlignment_Center, 0.f, false);
			m_voipColumnStyle = UIScoreboardColumnStyle(20.f, UIElementAlignment::UIElementAlignment_Center, 0.f, false);
			m_nameColumnStyle = UIScoreboardColumnStyle(50.f, UIElementAlignment::UIElementAlignment_Left, 0.f, false);
			m_killsColumnStyle = UIScoreboardColumnStyle(35.f, UIElementAlignment::UIElementAlignment_Right, 5.f, false);
			m_deathsColumnStyle = UIScoreboardColumnStyle(35.f, UIElementAlignment::UIElementAlignment_Right, 5.f, false);
			m_scoreColumnStyle = UIScoreboardColumnStyle(52.f, UIElementAlignment::UIElementAlignment_Right, 0.f, true);
			m_pingColumnStyle = UIScoreboardColumnStyle(34.f, UIElementAlignment::UIElementAlignment_Right, 0.f, false);
		};

		CtrRef<UIElementTableStyle> m_tableStyle; // 0x68 (104)
		u32 m_cellSpacing; // 0x70 (112)
		UIElementColor m_pingColumnFontColor; // 0x80 (128)
		CtrRef<UIElementFillData> m_localPlayerFill; // 0xA0 (160)
		CtrRef<UIElementFontStyle> m_localPlayerNumberFont; // 0xA8 (168)
		CtrRef<UIElementFontStyle> m_localPlayerSquadFont; // 0xB0 (176)
		CtrRef<UIElementFillData> m_selectedPlayerFill; // 0xB8 (184)
		CtrRef<UIElementFontStyle> m_selectedPlayerFont; // 0xC0 (192)
		CtrRef<UIElementFillData> m_selectedPlayerNotSpectatableFill; // 0xC8 (200)
		CtrRef<UIElementFillData> m_friendlyHeaderFill; // 0xD0 (208)
		CtrRef<UIElementFillData> m_enemyHeaderFill; // 0xD8 (216)
		CtrRef<UIElementFillData> m_spectatorHeaderFill; // 0xE0 (224)
		float m_teamNameLeftPadding; // 0xE8 (232)
		CtrRef<UIElementFillData> m_scoreColumnFill; // 0xF0 (240)
		CtrRef<UIElementFontStyle> m_numbersFont; // 0xF8 (248)
		CtrRef<UIElementFontStyle> m_selectedPlayerNumbersFont; // 0x100 (256)
		CtrRef<UIElementFontStyle> m_localPlayerSquadNumbersFont; // 0x108 (264)
		u32 m_scrollbarWidth; // 0x110 (272)
		u32 m_scrollbarMargin; // 0x114 (276)
		float m_endOfRoundPreScrollTime; // 0x118 (280)
		float m_endOfRoundScrollTime; // 0x11C (284)
		float m_endOfRoundScrollDA; // 0x120 (288)
		float m_endOfRoundScrollDB; // 0x124 (292)
		UIScoreboardColumnStyle m_numberColumnStyle; // 0x128 (296)
		UIScoreboardColumnStyle m_rankColumnStyle; // 0x138 (312)
		UIScoreboardColumnStyle m_voipColumnStyle; // 0x148 (328)
		UIScoreboardColumnStyle m_nameColumnStyle; // 0x158 (344)
		UIScoreboardColumnStyle m_killsColumnStyle; // 0x168 (360)
		UIScoreboardColumnStyle m_deathsColumnStyle; // 0x178 (376)
		UIScoreboardColumnStyle m_scoreColumnStyle; // 0x188 (392)
		UIScoreboardColumnStyle m_pingColumnStyle; // 0x198 (408)
	}; // 0x1B0 (432)
}

