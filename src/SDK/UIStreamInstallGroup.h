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
	struct UIStreamInstallGroup {
		UIStreamInstallGroup() {
			m_disableIfIncomplete = false;
		};

		String m_mainMenuSid; // 0x0 (0)
		String m_groupId; // 0x8 (8)
		bool m_disableIfIncomplete; // 0x10 (16)
	}; // 0x18 (24)
}

