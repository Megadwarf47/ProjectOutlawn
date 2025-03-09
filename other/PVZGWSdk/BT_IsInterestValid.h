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
	class BT_IsInterestValid : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsInterestValid"); }
		virtual ~BT_IsInterestValid() override {}
		BT_IsInterestValid() {
			m_interest = PointOfInterestType::PointOfInterest_None;
			m_comparator = ECompare::Compare_Equal;
			m_valid = true;
			m_insideRadius = false;
		};

		PointOfInterestType m_interest; // 0x20 (32)
		ECompare m_comparator; // 0x24 (36)
		bool m_valid; // 0x28 (40)
		bool m_insideRadius; // 0x29 (41)
	}; // 0x30 (48)
}

