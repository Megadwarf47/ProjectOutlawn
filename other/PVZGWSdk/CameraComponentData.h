///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/RegularCameraViewData.h>
#include <fb/SoldierAnimatedCameraData.h>
#include <fb/StanceCameraData.h>
#include <fb/Vec3.h>

namespace fb {
	class AlternateCameraViewData;
	class CameraComponentSoundData;
	class CameraRelativeControlData;
	class TargetCameraData;
}

namespace fb {
	class CameraComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraComponentData"); }
		virtual ~CameraComponentData() override {}
		CameraComponentData() {
			m_fieldOfView = 45.f;
			m_forceFieldOfView = -1.f;
			m_overrideFreelookPitch = 0.f;
			m_overrideFreelookYaw = 0.f;
			m_freezeHeight = 0.f;
			m_cameraTransitionTime = 2.f;
			m_meshParentComponentNumber = 0;
			m_enableCameraMesh = true;
			m_overrideFreelookEnable = false;
			m_alternateViewEnabled = true;
			m_isFirstPerson = false;
			m_receiveImpulsesAsThirdPerson = false;
			m_useCameraTransition = false;
		};

		RegularCameraViewData m_regularView; // 0x70 (112)
		Vec3 m_cameraTransitionPos; // 0xB0 (176)
		CtrRef<TargetCameraData> m_camera; // 0xC0 (192)
		float m_fieldOfView; // 0xC8 (200)
		float m_forceFieldOfView; // 0xCC (204)
		CtrRef<AlternateCameraViewData> m_alternateView; // 0xD0 (208)
		float m_overrideFreelookPitch; // 0xD8 (216)
		float m_overrideFreelookYaw; // 0xDC (220)
		CtrRef<CameraRelativeControlData> m_cameraRelativeControlConfig; // 0xE0 (224)
		float m_freezeHeight; // 0xE8 (232)
		SoldierAnimatedCameraData m_soldierAnimatedCamera; // 0xEC (236)
		float m_cameraTransitionTime; // 0xF4 (244)
		u32 m_meshParentComponentNumber; // 0xF8 (248)
		StanceCameraData m_stanceData; // 0x100 (256)
		CtrRef<CameraComponentSoundData> m_cameraSoundData; // 0x110 (272)
		bool m_enableCameraMesh; // 0x118 (280)
		bool m_overrideFreelookEnable; // 0x119 (281)
		bool m_alternateViewEnabled; // 0x11A (282)
		bool m_isFirstPerson; // 0x11B (283)
		bool m_receiveImpulsesAsThirdPerson; // 0x11C (284)
		bool m_useCameraTransition; // 0x11D (285)
	}; // 0x120 (288)
}

