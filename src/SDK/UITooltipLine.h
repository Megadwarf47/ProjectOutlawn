///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIInputActionAxisDisplay.h>

namespace fb {
	struct UITooltipLine {
		UITooltipLine() {
			m_inputAction = 0;
			m_axis = UIInputActionAxisDisplay::UIInputActionAxisDisplay_Positive;
			m_hideWhenMissingIcon = false;
		};

		s32 m_inputAction; // 0x0 (0)
		UIInputActionAxisDisplay m_axis; // 0x4 (4)
		String m_description; // 0x8 (8)
		bool m_hideWhenMissingIcon; // 0x10 (16)
	}; // 0x18 (24)
}

