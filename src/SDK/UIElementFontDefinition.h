///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementFont.h>

namespace fb {
	class UIElementTextFilter;
}

namespace fb {
	class UIElementFontDefinition : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementFontDefinition"); }
		virtual ~UIElementFontDefinition() override {}
		UIElementFontDefinition() {
			m_letterSpacing = 0.f;
			m_rowSpacing = 0;
		};

		UIElementFont m_font; // 0x10 (16)
		UIElementColor m_color; // 0x20 (32)
		float m_letterSpacing; // 0x40 (64)
		s32 m_rowSpacing; // 0x44 (68)
		RefArray<UIElementTextFilter> m_filters; // 0x48 (72)
	}; // 0x50 (80)
}

