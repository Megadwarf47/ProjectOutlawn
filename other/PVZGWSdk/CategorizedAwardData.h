///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AwardActivationOrder.h>
#include <fb/CategorizedAwardData.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class AwardData;
	class StatsCategoryBaseData;
}

namespace fb {
	struct CategorizedAwardData {
		CategorizedAwardData() {
			m_activationOrder = AwardActivationOrder::AwardActivationOrder_Sequential;
		};

		RefArray<AwardData> m_awards; // 0x0 (0)
		CtrRef<StatsCategoryBaseData> m_category; // 0x8 (8)
		Array<CategorizedAwardData> m_children; // 0x10 (16)
		AwardActivationOrder m_activationOrder; // 0x18 (24)
	}; // 0x20 (32)
}

