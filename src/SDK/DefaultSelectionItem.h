///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/UIDataSourceInfo.h>

namespace fb {
	struct DefaultSelectionItem {
		DefaultSelectionItem() {
			m_defaultSelectionIndex = 0;
		};

		UIDataSourceInfo m_defaultSelectionQuery; // 0x0 (0)
		s32 m_defaultSelectionIndex; // 0x18 (24)
	}; // 0x20 (32)
}

