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
	struct UITabBarButton {
		UITabBarButton() {
			m_buttonSelectable = true;
		};

		String m_sid; // 0x0 (0)
		String m_onSelectedOutputEvent; // 0x8 (8)
		String m_visibleProperty; // 0x10 (16)
		String m_selectableProperty; // 0x18 (24)
		String m_newContentProperty; // 0x20 (32)
		bool m_buttonSelectable; // 0x28 (40)
	}; // 0x30 (48)
}

