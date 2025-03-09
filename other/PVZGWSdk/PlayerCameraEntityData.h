///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraEntityBaseData.h>
#include <fb/TargetMode.h>

namespace fb {
	class PlayerCameraEntityData : public CameraEntityBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerCameraEntityData"); }
		virtual ~PlayerCameraEntityData() override {}
		PlayerCameraEntityData() {
			m_soldierTargetMode = TargetMode::TargetMode_ThirdPerson;
			m_soldierCameraIndex = 1;
			m_vehicleTargetMode = TargetMode::TargetMode_ThirdPerson;
			m_vehicleCameraIndex = 1;
			m_cameraSmoothingFactor = 0.f;
			m_releaseControlIfTargetLost = false;
			m_shouldTargetControllable = false;
			m_shouldTargetVehicleDriverEntry = true;
			m_shouldTargetExtraPlayerInDoublePlayerEvent = false;
		};

		TargetMode m_soldierTargetMode; // 0x80 (128)
		u32 m_soldierCameraIndex; // 0x84 (132)
		TargetMode m_vehicleTargetMode; // 0x88 (136)
		u32 m_vehicleCameraIndex; // 0x8C (140)
		float m_cameraSmoothingFactor; // 0x90 (144)
		bool m_releaseControlIfTargetLost; // 0x94 (148)
		bool m_shouldTargetControllable; // 0x95 (149)
		bool m_shouldTargetVehicleDriverEntry; // 0x96 (150)
		bool m_shouldTargetExtraPlayerInDoublePlayerEvent; // 0x97 (151)
	}; // 0xA0 (160)
}

