///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/LandingGearConditionData.h>

namespace fb {
	class LandingGearLogicData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LandingGearLogicData"); }
		virtual ~LandingGearLogicData() override {}
		LandingGearLogicData() {
		};

		LandingGearConditionData m_retractCondition; // 0x10 (16)
		LandingGearConditionData m_deployCondition; // 0x1C (28)
	}; // 0x28 (40)
}

