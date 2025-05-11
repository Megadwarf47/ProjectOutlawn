///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct UIButton {
		UIButton() {
			m_isPremium = false;
		};

		String m_buttonLabel; // 0x0 (0)
		String m_buttonId; // 0x8 (8)
		bool m_isPremium; // 0x10 (16)
	}; // 0x18 (24)
}

