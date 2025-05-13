///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EditableActions.h>
#include <fb/String.h>

namespace fb {
	class EntryInputActionMapsData;
}

namespace fb {
	struct EditableActionMap {
		EditableActionMap() {
		};

		String m_id; // 0x0 (0)
		String m_nameId; // 0x8 (8)
		CtrRef<EntryInputActionMapsData> m_actionMap; // 0x10 (16)
		EditableActions m_configurationLayout; // 0x18 (24)
	}; // 0x20 (32)
}

