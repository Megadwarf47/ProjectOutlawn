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
	class UIElementButtonStyle;
	class UIElementFillData;
}

namespace fb {
	class UIElementScrollbarStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementScrollbarStyle"); }
		virtual ~UIElementScrollbarStyle() override {}
		UIElementScrollbarStyle() {
		};

		CtrRef<UIElementFillData> m_fillBehindHandle; // 0x18 (24)
		CtrRef<UIElementButtonStyle> m_styleUp; // 0x20 (32)
		CtrRef<UIElementButtonStyle> m_styleDown; // 0x28 (40)
		CtrRef<UIElementButtonStyle> m_styleHandle; // 0x30 (48)
	}; // 0x38 (56)
}

