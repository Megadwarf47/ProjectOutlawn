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
#include <fb/Vec2.h>

namespace fb {
	class BFUIElement3SliceStatbarAlignedStyle;
	class UIElementFillData;
	class UIElementFontStyle;
}

namespace fb {
	class UICommanderSquadStatusWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICommanderSquadStatusWidgetData"); }
		virtual ~UICommanderSquadStatusWidgetData() override {}
		UICommanderSquadStatusWidgetData() {
			m_rowSpacing = 2;
			m_squadLeaderSpace = 30;
			m_squadMemberSpace = 30;
			m_textPadding = 4;
			m_squadIconBackgroundSize = Vec2(28.f, 28.f);
			m_squadInfoBackgroundSize = Vec2(100.f, 50.f);
		};

		s32 m_rowSpacing; // 0x68 (104)
		s32 m_squadLeaderSpace; // 0x6C (108)
		UIElementColor m_unavailabilityColor; // 0x70 (112)
		s32 m_squadMemberSpace; // 0x90 (144)
		s32 m_textPadding; // 0x94 (148)
		CtrRef<UIElementFillData> m_squadInfoBackgroundData; // 0x98 (152)
		CtrRef<UIElementFillData> m_squadInfoMutinyBackgroundData; // 0xA0 (160)
		CtrRef<UIElementFillData> m_squadIconBackgroundData; // 0xA8 (168)
		CtrRef<UIElementFillData> m_squadIconMutinyBackgroundData; // 0xB0 (176)
		Vec2 m_squadIconBackgroundSize; // 0xB8 (184)
		Vec2 m_squadInfoBackgroundSize; // 0xC0 (192)
		CtrRef<BFUIElement3SliceStatbarAlignedStyle> m_squadBarStyle; // 0xC8 (200)
		Vec2 m_squadBarOffset; // 0xD0 (208)
		Vec2 m_squadBarSize; // 0xD8 (216)
		CtrRef<UIElementFontStyle> m_playerFont; // 0xE0 (224)
	}; // 0xF0 (240)
}

