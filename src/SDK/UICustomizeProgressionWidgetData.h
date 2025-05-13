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
	class UICustomizeProgressionWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizeProgressionWidgetData"); }
		virtual ~UICustomizeProgressionWidgetData() override {}
		UICustomizeProgressionWidgetData() {
		};

		CtrRef<UIElementFillData> m_backgroundFillData; // 0x68 (104)
		CtrRef<BFUIElement3SliceStatbarStyle> m_statbarStyle; // 0x70 (112)
		UIElementColor m_progressionColor; // 0x80 (128)
	}; // 0xA0 (160)
}

