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
	class UIElementButtonStyle;
	class UIElementFillData;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIBattlepacksMenuWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattlepacksMenuWidgetData"); }
		virtual ~UIBattlepacksMenuWidgetData() override {}
		UIBattlepacksMenuWidgetData() {
		};

		CtrRef<UIWidgetBlueprint> m_battlepackStepperCellTemplate; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_storeStepperCellTemplate; // 0x70 (112)
		UIElementColor m_labelColor; // 0x80 (128)
		UIElementColor m_labelSelectedColor; // 0xA0 (160)
		CtrRef<UIElementFillData> m_stepperBackgroundNormalFill; // 0xC0 (192)
		CtrRef<UIElementFillData> m_stepperBackgroundSelectedFill; // 0xC8 (200)
		CtrRef<UIElementFillData> m_stepperEmptyFill; // 0xD0 (208)
		CtrRef<UIElementFillData> m_labelSelectedFill; // 0xD8 (216)
		CtrRef<UIElementButtonStyle> m_stepperOpenButtonStyle; // 0xE0 (224)
	}; // 0xF0 (240)
}

