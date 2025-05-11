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
	class AwardData;
}

namespace fb {
	struct CriteriaAward {
		CriteriaAward() {
			m_count = 0;
		};

		CtrRef<AwardData> m_award; // 0x0 (0)
		u32 m_count; // 0x8 (8)
		String m_sid; // 0x10 (16)
	}; // 0x18 (24)
}

