///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/VehicleCameraControlBinding.h>
#include <fb/VehicleEntryListenerBinding.h>

namespace fb {
	class VehicleEntryListenerComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleEntryListenerComponentData"); }
		virtual ~VehicleEntryListenerComponentData() override {}
		VehicleEntryListenerComponentData() {
			m_animationEntitySpacePriority = 0;
			m_animationWheelTransformDelay = 0.5f;
		};

		VehicleEntryListenerBinding m_vehicleEntryListener; // 0x70 (112)
		VehicleCameraControlBinding m_vehicleCameraControl; // 0x1B0 (432)
		s32 m_animationEntitySpacePriority; // 0x1C4 (452)
		float m_animationWheelTransformDelay; // 0x1C8 (456)
	}; // 0x1D0 (464)
}

