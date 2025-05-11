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

namespace fb {
	struct UIFontMapping {
		UIFontMapping() {
			m_bold = false;
		};

		Array<String> m_scaleformFontName; // 0x0 (0)
		String m_fontLongName; // 0x8 (8)
		bool m_bold; // 0x10 (16)
	}; // 0x18 (24)
}

