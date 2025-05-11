///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class UIComponentData;
}

namespace fb {
	struct UIDataSource {
		UIDataSource() {
			m_dataKey = 0;
		};

		CtrRef<UIComponentData> m_dataCategory; // 0x0 (0)
		s32 m_dataKey; // 0x8 (8)
		String m_schematicsProperty; // 0x10 (16)
	}; // 0x18 (24)
}

