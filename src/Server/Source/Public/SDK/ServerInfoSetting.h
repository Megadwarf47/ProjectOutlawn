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
	struct ServerInfoSetting {
		ServerInfoSetting() {
			m_isBool = false;
		};

		String m_key; // 0x0 (0)
		String m_name; // 0x8 (8)
		bool m_isBool; // 0x10 (16)
	}; // 0x18 (24)
}

