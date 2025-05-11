///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/ECompare.h>
#include <fb/PointOfInterestType.h>

namespace fb {
	class BT_IsInterestDistance : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsInterestDistance"); }
		virtual ~BT_IsInterestDistance() override {}
		BT_IsInterestDistance() {
			m_interest = PointOfInterestType::PointOfInterest_None;
			m_comparator = ECompare::Compare_Equal;
			m_value = 0.f;
			m_absolute = false;
		};

		PointOfInterestType m_interest; // 0x20 (32)
		ECompare m_comparator; // 0x24 (36)
		float m_value; // 0x28 (40)
		bool m_absolute; // 0x2C (44)
	}; // 0x30 (48)
}

