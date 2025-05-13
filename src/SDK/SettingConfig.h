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
	struct SettingConfig {
		SettingConfig() {
			m_categoryId = 0;
		};

		String m_key; // 0x0 (0)
		String m_nameSid; // 0x8 (8)
		String m_descSid; // 0x10 (16)
		u32 m_categoryId; // 0x18 (24)
	}; // 0x20 (32)
}

