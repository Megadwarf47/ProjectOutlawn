///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/StatsCategoryBaseData.h>
#include <fb/VehicleStateType.h>

namespace fb {
	class StatsCategoryVehicleStateTypeData : public StatsCategoryBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryVehicleStateTypeData"); }
		virtual ~StatsCategoryVehicleStateTypeData() override {}
		StatsCategoryVehicleStateTypeData() {
		};

		Array<VehicleStateType> m_states; // 0x20 (32)
	}; // 0x28 (40)
}

