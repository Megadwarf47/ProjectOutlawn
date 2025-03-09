///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Camera1pBinding.h>
#include <fb/CameraCommonBinding.h>
#include <fb/CharacterCameraComponentData.h>

namespace fb {
	class SoldierCameraComponentData : public CharacterCameraComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierCameraComponentData"); }
		virtual ~SoldierCameraComponentData() override {}
		SoldierCameraComponentData() {
			m_explosionImpulseMultiplier = 1.f;
			m_strafeTiltStrength = 0.1f;
			m_pitchTiltStrength = 0.1f;
			m_forceFieldOfView = -1.f;
			m_roll = 0.f;
			m_disableAiming = false;
			m_authoritativeEyePosition = false;
		};

		float m_explosionImpulseMultiplier; // 0x80 (128)
		float m_strafeTiltStrength; // 0x84 (132)
		float m_pitchTiltStrength; // 0x88 (136)
		Camera1pBinding m_camera1pBinding; // 0x8C (140)
		CameraCommonBinding m_cameraCommonBinding; // 0xC8 (200)
		float m_forceFieldOfView; // 0xF0 (240)
		float m_roll; // 0xF4 (244)
		bool m_disableAiming; // 0xF8 (248)
		bool m_authoritativeEyePosition; // 0xF9 (249)
	}; // 0x100 (256)
}

