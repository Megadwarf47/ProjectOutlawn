///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CommanderActionType.h>
#include <fb/CtrRef.h>
#include <fb/UIDeployScreenData.h>
#include <fb/UIElementColor.h>
#include <fb/Vec2.h>

namespace fb {
	class BFUIElement3SliceStatbarAlignedStyle;
	class UIElementButtonStyle;
	class UIElementFontStyle;
}

namespace fb {
	class UICommanderVehicleScreenData : public UIDeployScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICommanderVehicleScreenData"); }
		virtual ~UICommanderVehicleScreenData() override {}
		UICommanderVehicleScreenData() {
			m_menuEnableAnimSpeed = 10.f;
			m_menuDisableAnimSpeed = 5.f;
			m_menuEnableAnimDistance = 20.f;
			m_menuDisableAnimDistance = 20.f;
			m_menuButtonPadding = 3;
			m_menuButtonSize = Vec2(32.f, 32.f);
			m_menuIconSize = Vec2(32.f, 32.f);
			m_scrollThreshold3dView = 3;
			m_timeThreshold3dView = 1.f;
			m_minZoomThreshold3dView = 0.1f;
			m_mouseSpeed3dView = 0.1f;
		};

		UIElementColor m_crosshairEnabledColor; // 0x50 (80)
		UIElementColor m_crosshairDisabledColor; // 0x70 (112)
		UIElementColor m_selectedSquadBackgroundColor; // 0x90 (144)
		UIElementColor m_menuIconColor; // 0xB0 (176)
		UIElementColor m_menuIconDisabledColor; // 0xD0 (208)
		UIElementColor m_menuIconHoverColor; // 0xF0 (240)
		UIElementColor m_menuIconCooldownColor; // 0x110 (272)
		UIElementColor m_menuIconWarmupColor; // 0x130 (304)
		UIElementColor m_menuIconRunningColor; // 0x150 (336)
		CtrRef<UIElementFontStyle> m_selectedSquadFont; // 0x170 (368)
		CtrRef<UIElementFontStyle> m_unselectedSquadFont; // 0x178 (376)
		Vec2 m_selectedSquadTextPadding; // 0x180 (384)
		Array<CommanderActionType> m_enemyObjectiveActions; // 0x188 (392)
		Array<CommanderActionType> m_friendlyObjectiveActions; // 0x190 (400)
		Array<CommanderActionType> m_neutralCPActions; // 0x198 (408)
		Array<CommanderActionType> m_squadActions; // 0x1A0 (416)
		Array<CommanderActionType> m_playerActions; // 0x1A8 (424)
		Array<CommanderActionType> m_freeActions; // 0x1B0 (432)
		Array<CommanderActionType> m_topAlignedAssets; // 0x1B8 (440)
		Array<CommanderActionType> m_rightAlignedAssets; // 0x1C0 (448)
		Array<CommanderActionType> m_bottomAlignedAssets; // 0x1C8 (456)
		float m_menuEnableAnimSpeed; // 0x1D0 (464)
		float m_menuDisableAnimSpeed; // 0x1D4 (468)
		float m_menuEnableAnimDistance; // 0x1D8 (472)
		float m_menuDisableAnimDistance; // 0x1DC (476)
		CtrRef<BFUIElement3SliceStatbarAlignedStyle> m_progressbarStyleWarmUp; // 0x1E0 (480)
		CtrRef<BFUIElement3SliceStatbarAlignedStyle> m_progressbarStyleRunning; // 0x1E8 (488)
		CtrRef<BFUIElement3SliceStatbarAlignedStyle> m_progressbarStyleCoolDown; // 0x1F0 (496)
		s32 m_menuButtonPadding; // 0x1F8 (504)
		Vec2 m_menuButtonSize; // 0x1FC (508)
		CtrRef<UIElementButtonStyle> m_menuButtonStyle; // 0x208 (520)
		CtrRef<UIElementButtonStyle> m_menuButtonDisabledStyle; // 0x210 (528)
		CtrRef<UIElementButtonStyle> m_menuButtonProgressStyle; // 0x218 (536)
		CtrRef<UIElementFontStyle> m_enabledButtonFont; // 0x220 (544)
		CtrRef<UIElementFontStyle> m_disabledButtonFont; // 0x228 (552)
		Vec2 m_menuIconSize; // 0x230 (560)
		u32 m_scrollThreshold3dView; // 0x238 (568)
		float m_timeThreshold3dView; // 0x23C (572)
		float m_minZoomThreshold3dView; // 0x240 (576)
		float m_mouseSpeed3dView; // 0x244 (580)
	}; // 0x250 (592)
}

