///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class UIComponentData;
}

namespace fb {
	struct UISimpleDataSource {
		UISimpleDataSource() {
			m_dataKey = 0;
		};

		CtrRef<UIComponentData> m_dataCategory; // 0x0 (0)
		s32 m_dataKey; // 0x8 (8)
	}; // 0x10 (16)
}

