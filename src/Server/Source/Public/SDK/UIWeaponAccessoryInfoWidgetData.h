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
	class UIWeaponAccessoryInfoWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWeaponAccessoryInfoWidgetData"); }
		virtual ~UIWeaponAccessoryInfoWidgetData() override {}
		UIWeaponAccessoryInfoWidgetData() {
		};

		CtrRef<UIElementFillData> m_backgroundFillData; // 0x68 (104)
		CtrRef<BFUIElement3SliceStatbarStyle> m_statbarStyle; // 0x70 (112)
		UIElementColor m_comparisonNeutralColor; // 0x80 (128)
		UIElementColor m_comparisonIncreasingColor; // 0xA0 (160)
		UIElementColor m_comparisonDecreasingColor; // 0xC0 (192)
		UIElementColor m_disabledFiremodeColor; // 0xE0 (224)
	}; // 0x100 (256)
}

