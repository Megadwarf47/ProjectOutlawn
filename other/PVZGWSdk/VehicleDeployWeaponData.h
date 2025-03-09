///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Vec3.h>
#include <fb/WeaponData.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	class VehicleDeployWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleDeployWeaponData"); }
		virtual ~VehicleDeployWeaponData() override {}
		VehicleDeployWeaponData() {
			m_deployAreaRadius = 0.5f;
			m_deployAreaGroundRayLength = 2.f;
			m_deployAreaGroundFlatness = 0.9f;
			m_canRemoteEnterVehicle = true;
			m_usePreview = true;
			m_checkClearSky = false;
		};

		Vec3 m_deployOffset; // 0x20 (32)
		float m_deployAreaRadius; // 0x30 (48)
		float m_deployAreaGroundRayLength; // 0x34 (52)
		float m_deployAreaGroundFlatness; // 0x38 (56)
		CtrRef<ObjectBlueprint> m_previewObject; // 0x40 (64)
		bool m_canRemoteEnterVehicle; // 0x48 (72)
		bool m_usePreview; // 0x49 (73)
		bool m_checkClearSky; // 0x4A (74)
	}; // 0x50 (80)
}

