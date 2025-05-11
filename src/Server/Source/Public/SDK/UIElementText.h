///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIElementAlignment.h>
#include <fb/UIElementTextEntry.h>

namespace fb {
	struct UIElementText {
		UIElementText() {
			m_verticalAlignment = UIElementAlignment::UIElementAlignment_Center;
			m_horizonalAlignment = UIElementAlignment::UIElementAlignment_Center;
			m_multiline = false;
			m_wordwrap = false;
		};

		String m_sid; // 0x0 (0)
		Array<UIElementTextEntry> m_entries; // 0x8 (8)
		UIElementAlignment m_verticalAlignment; // 0x10 (16)
		UIElementAlignment m_horizonalAlignment; // 0x14 (20)
		bool m_multiline; // 0x18 (24)
		bool m_wordwrap; // 0x19 (25)
	}; // 0x20 (32)
}

