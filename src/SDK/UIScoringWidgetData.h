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
#include <fb/Vec4.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIScoringWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIScoringWidgetData"); }
		virtual ~UIScoringWidgetData() override {}
		UIScoringWidgetData() {
			m_lineSpeed = 250.f;
			m_lineHeight = 30.f;
			m_scoreEventRect = Vec4(0.f, 0.f, 300.f, 40.f);
			m_scoreAmountRect = Vec4(300.f, 0.f, 350.f, 40.f);
			m_boostIconRect = Vec4(350.f, 0.f, 370.f, 20.f);
			m_aggregatorDrawRect = Vec4(400.f, 0.f, 500.f, 80.f);
			m_tableSize = 5;
			m_alphaScale = 0.001f;
			m_lineDisplayTime = 5.f;
			m_lineStartFadeTime = 2.5f;
			m_lineAlphaDecreaseSpeed = 5.f;
			m_lineScaleSpeed = 2.5f;
			m_lineTargetScale = 1.3f;
			m_swipeSpeed = 1000.f;
			m_swipeTarget = 400.f;
			m_showEventTime = 1.f;
			m_aggregatorAlphaDecreaseSpeed = 5.f;
			m_aggregatorScaleSpeed = 2.5f;
			m_aggregatorTargetScale = 1.3f;
			m_aggregatorLifetime = 2.f;
			m_cursorFrameRate = 30.f;
			m_displayKillInfo = true;
			m_drawCursor = true;
			m_blinkCursor = true;
		};

		float m_lineSpeed; // 0x68 (104)
		float m_lineHeight; // 0x6C (108)
		Vec4 m_scoreEventRect; // 0x70 (112)
		Vec4 m_scoreAmountRect; // 0x80 (128)
		Vec4 m_boostIconRect; // 0x90 (144)
		UIElementColor m_weaponTextColor; // 0xA0 (160)
		UIElementColor m_scoreTextColor; // 0xC0 (192)
		UIElementColor m_scoreAmountColor; // 0xE0 (224)
		UIElementColor m_boostIconColor; // 0x100 (256)
		Vec4 m_swipeStartRect; // 0x120 (288)
		UIElementColor m_aggregatorColor; // 0x130 (304)
		Vec4 m_aggregatorDrawRect; // 0x150 (336)
		u32 m_tableSize; // 0x160 (352)
		float m_alphaScale; // 0x164 (356)
		CtrRef<UIElementFontStyle> m_lineMajorFontStyle; // 0x168 (360)
		CtrRef<UIElementFontStyle> m_lineMinorFontStyle; // 0x170 (368)
		float m_lineDisplayTime; // 0x178 (376)
		float m_lineStartFadeTime; // 0x17C (380)
		float m_lineAlphaDecreaseSpeed; // 0x180 (384)
		float m_lineScaleSpeed; // 0x184 (388)
		float m_lineTargetScale; // 0x188 (392)
		float m_swipeSpeed; // 0x18C (396)
		float m_swipeTarget; // 0x190 (400)
		float m_showEventTime; // 0x194 (404)
		float m_aggregatorAlphaDecreaseSpeed; // 0x198 (408)
		CtrRef<UIElementFontStyle> m_aggregatorFont; // 0x1A0 (416)
		float m_aggregatorScaleSpeed; // 0x1A8 (424)
		float m_aggregatorTargetScale; // 0x1AC (428)
		float m_aggregatorLifetime; // 0x1B0 (432)
		float m_cursorFrameRate; // 0x1B4 (436)
		bool m_displayKillInfo; // 0x1B8 (440)
		bool m_drawCursor; // 0x1B9 (441)
		bool m_blinkCursor; // 0x1BA (442)
	}; // 0x1C0 (448)
}

