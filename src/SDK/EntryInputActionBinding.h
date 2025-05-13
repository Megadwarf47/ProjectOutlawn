///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntryInputActionType.h>
#include <fb/Types.h>

namespace fb {
	struct EntryInputActionBinding {
		EntryInputActionBinding() {
			m_action = 899534898;
			m_alias = 899534898;
			m_actionType = EntryInputActionType::EntryInputActionTypeAnalog;
			m_networked = true;
		};

		s32 m_action; // 0x0 (0)
		s32 m_alias; // 0x4 (4)
		EntryInputActionType m_actionType; // 0x8 (8)
		bool m_networked; // 0xC (12)
	}; // 0x10 (16)
}

