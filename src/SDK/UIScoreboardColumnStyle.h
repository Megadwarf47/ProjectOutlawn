///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/UIElementAlignment.h>

namespace fb {
	struct UIScoreboardColumnStyle {
		UIScoreboardColumnStyle() {
			m_width = 20.f;
			m_textAlignment = UIElementAlignment::UIElementAlignment_Left;
			m_textOffset = 0.f;
			m_hasLine = true;
		};

		float m_width; // 0x0 (0)
		UIElementAlignment m_textAlignment; // 0x4 (4)
		float m_textOffset; // 0x8 (8)
		bool m_hasLine; // 0xC (12)
	}; // 0x10 (16)
}

