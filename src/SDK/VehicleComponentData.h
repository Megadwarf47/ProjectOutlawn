///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ChassisComponentData.h>

namespace fb {
	class VehicleComponentData : public ChassisComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleComponentData"); }
		virtual ~VehicleComponentData() override {}
		VehicleComponentData() {
		};

	}; // 0xE0 (224)
}

