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
	class UIElementFontStyle;
	class UIElementScrollbarStyle;
}

namespace fb {
	class UIElementTableStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementTableStyle"); }
		virtual ~UIElementTableStyle() override {}
		UIElementTableStyle() {
			m_headerHeight = 32.f;
			m_rowHeight = 31.f;
		};

		CtrRef<UIElementScrollbarStyle> m_styleScroll; // 0x18 (24)
		CtrRef<UIElementFillData> m_fillHeader; // 0x20 (32)
		CtrRef<UIElementFillData> m_fillCell; // 0x28 (40)
		CtrRef<UIElementFontStyle> m_headerFontStyle; // 0x30 (48)
		CtrRef<UIElementFontStyle> m_cellFontStyle; // 0x38 (56)
		CtrRef<UIElementFillData> m_fillRowsBounds; // 0x40 (64)
		float m_headerHeight; // 0x48 (72)
		float m_rowHeight; // 0x4C (76)
	}; // 0x50 (80)
}

