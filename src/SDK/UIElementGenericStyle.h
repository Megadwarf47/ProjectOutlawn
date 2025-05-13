///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIElementStyle.h>

namespace fb {
	class UIElementFillData;
}

namespace fb {
	class UIElementGenericStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementGenericStyle"); }
		virtual ~UIElementGenericStyle() override {}
		UIElementGenericStyle() {
		};

		CtrRef<UIElementFillData> m_fillData; // 0x18 (24)
	}; // 0x20 (32)
}

