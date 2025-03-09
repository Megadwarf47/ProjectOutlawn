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
	class UIMyServersWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMyServersWidgetData"); }
		virtual ~UIMyServersWidgetData() override {}
		UIMyServersWidgetData() {
		};

		CtrRef<UIWidgetBlueprint> m_stepperCellTemplate; // 0x68 (104)
		CtrRef<UIElementFillData> m_stepperBackgroundNormalFill; // 0x70 (112)
		CtrRef<UIElementFillData> m_stepperBackgroundSelectedFill; // 0x78 (120)
		CtrRef<UIElementFontStyle> m_stepperNormalFont; // 0x80 (128)
	}; // 0x88 (136)
}

