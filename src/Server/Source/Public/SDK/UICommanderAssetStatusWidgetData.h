///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CommanderActionType.h>
#include <fb/CtrRef.h>
#include <fb/UIElementColor.h>
#include <fb/Vec2.h>

namespace fb {
	class BFUIElement3SliceStatbarAlignedStyle;
	class UIElementFillData;
	class UIElementFontStyle;
}

namespace fb {
	class UICommanderAssetStatusWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICommanderAssetStatusWidgetData"); }
		virtual ~UICommanderAssetStatusWidgetData() override {}
		UICommanderAssetStatusWidgetData() {
			m_rowSpacing = 2;
			m_rowHeight = 32;
			m_textPadding = 4;
			m_assetIconSize = Vec2(32.f, 32.f);
		};

		CtrRef<BFUIElement3SliceStatbarAlignedStyle> m_progressbarStyleWarmUp; // 0x68 (104)
		CtrRef<BFUIElement3SliceStatbarAlignedStyle> m_progressbarStyleRunning; // 0x70 (112)
		UIElementColor m_iconEnabledColor; // 0x80 (128)
		UIElementColor m_iconWarmupColor; // 0xA0 (160)
		UIElementColor m_iconCooldownColor; // 0xC0 (192)
		UIElementColor m_iconRunningColor; // 0xE0 (224)
		UIElementColor m_iconDisabledColor; // 0x100 (256)
		CtrRef<BFUIElement3SliceStatbarAlignedStyle> m_progressbarStyleCoolDown; // 0x120 (288)
		CtrRef<UIElementFontStyle> m_fontStyleRunning; // 0x128 (296)
		CtrRef<UIElementFontStyle> m_fontStyleDisabled; // 0x130 (304)
		CtrRef<UIElementFontStyle> m_fontStyleEnabled; // 0x138 (312)
		CtrRef<UIElementFontStyle> m_fontStyleWarmup; // 0x140 (320)
		CtrRef<UIElementFontStyle> m_fontStyleCooldown; // 0x148 (328)
		s32 m_rowSpacing; // 0x150 (336)
		s32 m_rowHeight; // 0x154 (340)
		s32 m_textPadding; // 0x158 (344)
		CtrRef<UIElementFillData> m_objectiveBackgroundData; // 0x160 (352)
		CtrRef<UIElementFillData> m_assetBackgroundData; // 0x168 (360)
		Vec2 m_assetIconSize; // 0x170 (368)
		Array<CommanderActionType> m_exludedActions; // 0x178 (376)
	}; // 0x180 (384)
}

