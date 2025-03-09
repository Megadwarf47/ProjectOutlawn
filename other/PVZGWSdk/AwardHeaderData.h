///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AbstractAwardData.h>
#include <fb/AwardGroup.h>
#include <fb/StatsMultiplicity.h>

namespace fb {
	class AwardHeaderData : public AbstractAwardData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardHeaderData"); }
		virtual ~AwardHeaderData() override {}
		AwardHeaderData() {
			m_group = AwardGroup::AwardGroup_Undefined;
			m_multiplicity = StatsMultiplicity::StatsMultiplicity_Solo;
		};

		AwardGroup m_group; // 0x10 (16)
		StatsMultiplicity m_multiplicity; // 0x14 (20)
	}; // 0x18 (24)
}

