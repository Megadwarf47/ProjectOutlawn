///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIElement3SliceStatbarStyle.h>
#include <fb/UIElementAlignment.h>
#include <fb/UIElementColor.h>

namespace fb {
	class BFUIElement3SliceStatbarAlignedStyle : public BFUIElement3SliceStatbarStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElement3SliceStatbarAlignedStyle"); }
		virtual ~BFUIElement3SliceStatbarAlignedStyle() override {}
		BFUIElement3SliceStatbarAlignedStyle() {
			m_horizontalAlignment = UIElementAlignment::UIElementAlignment_Left;
			m_vertical = false;
			m_invert = false;
		};

		UIElementAlignment m_horizontalAlignment; // 0x50 (80)
		bool m_vertical; // 0x54 (84)
		bool m_invert; // 0x55 (85)
		UIElementColor m_color; // 0x60 (96)
	}; // 0x80 (128)
}

