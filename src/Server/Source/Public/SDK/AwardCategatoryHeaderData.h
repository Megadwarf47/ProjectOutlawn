///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AwardActivationOrder.h>
#include <fb/AwardHeaderData.h>
#include <fb/CtrRef.h>

namespace fb {
	class StatsCategoryBaseData;
}

namespace fb {
	class AwardCategatoryHeaderData : public AwardHeaderData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardCategatoryHeaderData"); }
		virtual ~AwardCategatoryHeaderData() override {}
		AwardCategatoryHeaderData() {
			m_activationOrder = AwardActivationOrder::AwardActivationOrder_Sequential;
		};

		CtrRef<StatsCategoryBaseData> m_category; // 0x18 (24)
		AwardActivationOrder m_activationOrder; // 0x20 (32)
	}; // 0x28 (40)
}

