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
	class BFUIElement3SliceStatbarStyle;
	class UIElementFillData;
}

namespace fb {
	class UIWeaponCompareWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWeaponCompareWidgetData"); }
		virtual ~UIWeaponCompareWidgetData() override {}
		UIWeaponCompareWidgetData() {
			m_group1VerticalOffset = 0.f;
		};

		CtrRef<UIElementFillData> m_backgroundFillData; // 0x68 (104)
		float m_group1VerticalOffset; // 0x70 (112)
		UIElementColor m_progressionColor; // 0x80 (128)
		UIElementColor m_comparisonNeutralColor; // 0xA0 (160)
		UIElementColor m_comparisonIncreasingColor; // 0xC0 (192)
		UIElementColor m_comparisonDecreasingColor; // 0xE0 (224)
		UIElementColor m_disabledFiremodeColor; // 0x100 (256)
		CtrRef<BFUIElement3SliceStatbarStyle> m_statbarStyle; // 0x120 (288)
	}; // 0x130 (304)
}

