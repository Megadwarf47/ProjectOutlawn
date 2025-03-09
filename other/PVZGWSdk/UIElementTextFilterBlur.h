///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIElementTextFilter.h>

namespace fb {
	class UIElementTextFilterBlur : public UIElementTextFilter {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementTextFilterBlur"); }
		virtual ~UIElementTextFilterBlur() override {}
		UIElementTextFilterBlur() {
			m_x = 4.f;
			m_y = 4.f;
			m_strength = 100.f;
		};

		float m_x; // 0x10 (16)
		float m_y; // 0x14 (20)
		float m_strength; // 0x18 (24)
	}; // 0x20 (32)
}

