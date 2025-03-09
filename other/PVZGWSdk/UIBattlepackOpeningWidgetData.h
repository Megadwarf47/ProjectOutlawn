///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementFillData;
	class UIElementFontStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIBattlepackOpeningWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattlepackOpeningWidgetData"); }
		virtual ~UIBattlepackOpeningWidgetData() override {}
		UIBattlepackOpeningWidgetData() {
			m_cellSpacing = 2;
			m_cellHeight = 200.f;
			m_introAnimTimePerItem = 0.5f;
		};

		CtrRef<UIElementFillData> m_advancedItemFill; // 0x68 (104)
		CtrRef<UIElementFillData> m_standardtemFill; // 0x70 (112)
		CtrRef<UIElementFillData> m_superiorItemFill; // 0x78 (120)
		CtrRef<UIElementFillData> m_distinguishedItemFill; // 0x80 (128)
		CtrRef<UIElementFillData> m_specialItemFill; // 0x88 (136)
		CtrRef<UIElementFillData> m_premiumItemFill; // 0x90 (144)
		CtrRef<UIWidgetBlueprint> m_cellTemplate; // 0x98 (152)
		CtrRef<UIElementFillData> m_normalFill; // 0xA0 (160)
		CtrRef<UIElementFillData> m_selectedFill; // 0xA8 (168)
		CtrRef<UIElementFillData> m_selectedLabelFill; // 0xB0 (176)
		CtrRef<UIElementFillData> m_descriptionBackgroundFill; // 0xB8 (184)
		CtrRef<UIElementFontStyle> m_normalFont; // 0xC0 (192)
		s32 m_cellSpacing; // 0xC8 (200)
		float m_cellHeight; // 0xCC (204)
		float m_introAnimTimePerItem; // 0xD0 (208)
	}; // 0xD8 (216)
}

