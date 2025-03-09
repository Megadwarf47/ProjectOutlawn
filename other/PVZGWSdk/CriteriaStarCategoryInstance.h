///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class StatsCategoryBaseData;
}

namespace fb {
	struct CriteriaStarCategoryInstance {
		CriteriaStarCategoryInstance() {
		};

		String m_name; // 0x0 (0)
		CtrRef<StatsCategoryBaseData> m_paramX; // 0x8 (8)
		CtrRef<StatsCategoryBaseData> m_paramY; // 0x10 (16)
	}; // 0x18 (24)
}

