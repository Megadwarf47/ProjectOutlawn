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
}

namespace fb {
	class UIKitLoadoutSlotWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIKitLoadoutSlotWidgetData"); }
		virtual ~UIKitLoadoutSlotWidgetData() override {}
		UIKitLoadoutSlotWidgetData() {
		};

		CtrRef<UIElementFillData> m_highlightedColor; // 0x68 (104)
	}; // 0x70 (112)
}

