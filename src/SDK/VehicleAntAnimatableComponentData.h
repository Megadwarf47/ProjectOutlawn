///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LodAntAnimatableComponentData.h>
#include <fb/VehicleAntLodBinding.h>
#include <fb/VehicleAntMovementBinding.h>

namespace fb {
	class VehicleAntAnimatableComponentData : public LodAntAnimatableComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleAntAnimatableComponentData"); }
		virtual ~VehicleAntAnimatableComponentData() override {}
		VehicleAntAnimatableComponentData() {
		};

		VehicleAntLodBinding m_vehicleBinding; // 0x180 (384)
		VehicleAntMovementBinding m_movementBinding; // 0x1A8 (424)
	}; // 0x210 (528)
}

