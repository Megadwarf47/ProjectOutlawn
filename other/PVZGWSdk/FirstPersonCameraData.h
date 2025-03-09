///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class WeaponLagSpringEffectData;
}

namespace fb {
	class FirstPersonCameraData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FirstPersonCameraData"); }
		virtual ~FirstPersonCameraData() override {}
		FirstPersonCameraData() {
			m_offset = Vec3(0.1f, -1.5f, 0.2f);
			m_weaponBaseOffset = Vec3(-0.09f, 0.f, 0.f);
			m_weaponLagRotationOffset = Vec3(-0.09f, 0.f, 0.2f);
			m_moveStrafeModifier = 0.f;
			m_moveForwardModifier = 0.f;
			m_rotateYawModifier = 0.f;
			m_rotatePitchModifier = 0.f;
			m_rotateRollModifier = 0.f;
			m_zoomMoveStrafeModifier = 0.f;
			m_zoomMoveForwardModifier = 0.f;
			m_zoomRotateYawModifier = 0.f;
			m_zoomRotatePitchModifier = 0.f;
			m_zoomRotateRollModifier = 0.f;
			m_releaseModifier = 0.f;
			m_releaseModifierPitch = -1.f;
			m_releaseModifierYaw = -1.f;
			m_releaseModifierRoll = -1.f;
			m_offsetReleaseModifier = -1.f;
			m_zoomReleaseModifierPitch = -1.f;
			m_zoomReleaseModifierYaw = -1.f;
			m_zoomReleaseModifierRoll = -1.f;
			m_zoomOffsetReleaseModifier = -1.f;
			m_rotationAdditionToOffset = 1.f;
		};

		CtrRef<WeaponLagSpringEffectData> m_weaponSpringEffect; // 0x10 (16)
		CtrRef<WeaponLagSpringEffectData> m_cameraSpringEffect; // 0x18 (24)
		Vec3 m_offset; // 0x20 (32)
		Vec3 m_weaponBaseOffset; // 0x30 (48)
		Vec3 m_weaponLagRotationOffset; // 0x40 (64)
		Vec3 m_rotation; // 0x50 (80)
		float m_moveStrafeModifier; // 0x60 (96)
		float m_moveForwardModifier; // 0x64 (100)
		float m_rotateYawModifier; // 0x68 (104)
		float m_rotatePitchModifier; // 0x6C (108)
		float m_rotateRollModifier; // 0x70 (112)
		float m_zoomMoveStrafeModifier; // 0x74 (116)
		float m_zoomMoveForwardModifier; // 0x78 (120)
		float m_zoomRotateYawModifier; // 0x7C (124)
		float m_zoomRotatePitchModifier; // 0x80 (128)
		float m_zoomRotateRollModifier; // 0x84 (132)
		float m_releaseModifier; // 0x88 (136)
		float m_releaseModifierPitch; // 0x8C (140)
		float m_releaseModifierYaw; // 0x90 (144)
		float m_releaseModifierRoll; // 0x94 (148)
		float m_offsetReleaseModifier; // 0x98 (152)
		float m_zoomReleaseModifierPitch; // 0x9C (156)
		float m_zoomReleaseModifierYaw; // 0xA0 (160)
		float m_zoomReleaseModifierRoll; // 0xA4 (164)
		float m_zoomOffsetReleaseModifier; // 0xA8 (168)
		float m_rotationAdditionToOffset; // 0xAC (172)
	}; // 0xB0 (176)
}

