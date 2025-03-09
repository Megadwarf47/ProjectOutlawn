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
	struct UIDataSourceInfo {
		UIDataSourceInfo() {
			m_dataKey = 0;
			m_useDirectAccess = false;
			m_updateOnInitialize = true;
		};

		String m_dataName; // 0x0 (0)
		CtrRef<UIComponentData> m_dataCategory; // 0x8 (8)
		s32 m_dataKey; // 0x10 (16)
		bool m_useDirectAccess; // 0x14 (20)
		bool m_updateOnInitialize; // 0x15 (21)
	}; // 0x18 (24)
}

