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
	struct PVZUIPopupTextInput {
		PVZUIPopupTextInput() {
			m_isPassword = false;
		};

		String m_id; // 0x0 (0)
		String m_label; // 0x8 (8)
		String m_defaultValue; // 0x10 (16)
		bool m_isPassword; // 0x18 (24)
	}; // 0x20 (32)
}

