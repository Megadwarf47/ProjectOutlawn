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
	struct DataSource {
		DataSource() {
			m_value = 0;
		};

		CtrRef<UIComponentData> m_category; // 0x0 (0)
		s32 m_value; // 0x8 (8)
	}; // 0x10 (16)
}

