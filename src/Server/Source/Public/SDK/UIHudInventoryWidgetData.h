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
	class UIElementFontStyle;
}

namespace fb {
	class UIHudInventoryWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIHudInventoryWidgetData"); }
		virtual ~UIHudInventoryWidgetData() override {}
		UIHudInventoryWidgetData() {
		};

		CtrRef<UIElementFontStyle> m_inventoryFont; // 0x68 (104)
	}; // 0x70 (112)
}

