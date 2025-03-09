///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct VehicleEntryListenerBinding {
		VehicleEntryListenerBinding() {
		};

		AntRef m_inVehicle; // 0x0 (0)
		AntRef m_inOpenEntry; // 0x14 (20)
		AntRef m_vehicleEntryFire; // 0x28 (40)
		AntRef m_vehicleEntryYaw; // 0x3C (60)
		AntRef m_vehicleEntryRelativeYaw; // 0x50 (80)
		AntRef m_vehicleEntryPitch; // 0x64 (100)
		AntRef m_vehicleEntryRoll; // 0x78 (120)
		AntRef m_vehicleEntryRotation; // 0x8C (140)
		AntRef m_vehicleEntryForceX; // 0xA0 (160)
		AntRef m_vehicleEntryForceY; // 0xB4 (180)
		AntRef m_vehicleEntryForceZ; // 0xC8 (200)
		AntRef m_vehicleEntryIndex; // 0xDC (220)
		AntRef m_vehicleEntryIndexUpdated; // 0xF0 (240)
		AntRef m_vehicleOpenEntryIndex; // 0x104 (260)
		AntRef m_inVehicleRetrigger; // 0x118 (280)
		AntRef m_vehicleEntryChooserIndex; // 0x12C (300)
	}; // 0x140 (320)
}

