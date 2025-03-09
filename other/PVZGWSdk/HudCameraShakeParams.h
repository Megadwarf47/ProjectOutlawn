///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct HudCameraShakeParams {
		HudCameraShakeParams() {
			m_weaponDispersionMin = 0.2f;
			m_weaponDispersionMax = 1.f;
			m_weaponDispersionScale = -200.f;
			m_weaponDispersionFilterSize = 3;
			m_jumpEffectDurationMin = 0.05f;
			m_jumpEffectDurationMax = 0.2f;
			m_jumpEffectMin = 0.f;
			m_jumpEffectMax = -2.f;
			m_landEffectDurationMin = 0.05f;
			m_landEffectDurationMax = 0.2f;
			m_landEffectMin = 1.f;
			m_landEffectMax = 3.f;
			m_jumpAndLandEffectFilterSize = 20;
			m_cameraShakeMinAngle = 1.2f;
			m_cameraShakeMaxAngle = 6.f;
			m_cameraShakeXScale = 15.f;
			m_cameraShakeYScale = 10.f;
			m_cameraShakeFilterSize = 10;
			m_weaponLagXScale = 20.f;
			m_weaponLagYScale = 20.f;
			m_lagFilterSize = 10;
			m_displacementPivotZ = 1000.f;
			m_maxDisplacementAngle = 20.f;
			m_maxDisplacementZ = 1000.f;
		};

		float m_weaponDispersionMin; // 0x0 (0)
		float m_weaponDispersionMax; // 0x4 (4)
		float m_weaponDispersionScale; // 0x8 (8)
		u32 m_weaponDispersionFilterSize; // 0xC (12)
		float m_jumpEffectDurationMin; // 0x10 (16)
		float m_jumpEffectDurationMax; // 0x14 (20)
		float m_jumpEffectMin; // 0x18 (24)
		float m_jumpEffectMax; // 0x1C (28)
		float m_landEffectDurationMin; // 0x20 (32)
		float m_landEffectDurationMax; // 0x24 (36)
		float m_landEffectMin; // 0x28 (40)
		float m_landEffectMax; // 0x2C (44)
		u32 m_jumpAndLandEffectFilterSize; // 0x30 (48)
		float m_cameraShakeMinAngle; // 0x34 (52)
		float m_cameraShakeMaxAngle; // 0x38 (56)
		float m_cameraShakeXScale; // 0x3C (60)
		float m_cameraShakeYScale; // 0x40 (64)
		u32 m_cameraShakeFilterSize; // 0x44 (68)
		float m_weaponLagXScale; // 0x48 (72)
		float m_weaponLagYScale; // 0x4C (76)
		u32 m_lagFilterSize; // 0x50 (80)
		float m_displacementPivotZ; // 0x54 (84)
		float m_maxDisplacementAngle; // 0x58 (88)
		float m_maxDisplacementZ; // 0x5C (92)
	}; // 0x60 (96)
}

