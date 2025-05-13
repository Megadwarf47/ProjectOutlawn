///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StatsCategoryGuidData.h>

namespace fb {
	class StatsCategoryVehicleData : public StatsCategoryGuidData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryVehicleData"); }
		virtual ~StatsCategoryVehicleData() override {}
		StatsCategoryVehicleData() {
			m_firstVehicleId = 0;
		};

		u32 m_firstVehicleId; // 0x28 (40)
	}; // 0x30 (48)
}

