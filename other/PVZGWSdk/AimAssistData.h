///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/Types.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class SkeletonCollisionData;
}

namespace fb {
	struct AimAssistData {
		AimAssistData() {
			m_stickyBoxScale = Vec3(1.9f, 1.f, 1.9f);
			m_stickyDistanceScale = Vec3(0.5f, 0.f, 0.5f);
			m_snapBoxScale = Vec3(1.9f, 1.f, 1.9f);
			m_snapDistanceScale = Vec3(0.5f, 0.f, 0.5f);
			m_eyePosOffset = Vec3(0.6f, 0.4f, 0.f);
			m_accelerationInputThreshold = 0.f;
			m_accelerationMultiplier = 0.f;
			m_accelerationDamping = 0.f;
			m_accelerationTimeThreshold = 0.f;
			m_squaredAcceleration = 0.f;
			m_maxAcceleration = Vec2(100.f, 100.f);
			m_yawSpeedStrength = 20.f;
			m_pitchSpeedStrength = 20.f;
			m_attractDistanceFallOffs = Vec2(1.f, 1.2f);
			m_attractSoftZone = 0.f;
			m_attractUserInputMultiplier = 1.f;
			m_attractUserInputMultiplier_NoZoom = -1.f;
			m_attractOwnSpeedInfluence = 0.f;
			m_attractTargetSpeedInfluence = 0.f;
			m_attractOwnRequiredMovementForMaximumAttract = 0.f;
			m_attractStartInputThreshold = 0.f;
			m_attractMoveInputCap = 0.9f;
			m_attractYawStrength = 0.f;
			m_attractPitchStrength = 0.f;
			m_maxToTargetAngle = 90.f;
			m_maxToTargetXZAngle = 90.f;
			m_viewObstructedKeepTime = 0.f;
			m_snapZoomLateralSpeedLimit = 1000.f;
			m_snapZoomTime = 0.2f;
			m_snapZoomPostTimeNoInput = 0.f;
			m_snapZoomPostTime = 0.f;
			m_snapZoomReticlePointPriority = 999;
			m_snapZoomAutoEngageTime = 0.f;
			m_snapZoomBreakTimeAtMaxInput = -1.f;
			m_snapZoomBreakMaxInput = 0.2f;
			m_snapZoomBreakMinAngle = 90.f;
			m_snapZoomSpamGuardTime = 0.5f;
			m_checkBoneCenterOnlyDistance = 40.f;
			m_disableForcedTargetRecalcDistance = 7.f;
			m_overrideAimingRange = 0.f;
			m_overrideAimingRangeCrouch = 0.f;
			m_overrideAimingRangeProne = 0.f;
			m_useYawAcceleration = false;
			m_usePitchAcceleration = false;
			m_snapZoomUserShorterWeaponTime = true;
			m_snapZoomPostTimeDynamicPoint = true;
			m_forceSoldierBackupSkeletonCollisionUse = false;
		};

		Vec3 m_stickyBoxScale; // 0x0 (0)
		Vec3 m_stickyDistanceScale; // 0x10 (16)
		Vec3 m_snapBoxScale; // 0x20 (32)
		Vec3 m_snapDistanceScale; // 0x30 (48)
		Vec3 m_eyePosOffset; // 0x40 (64)
		Array<float> m_inputPolynomial; // 0x50 (80)
		Array<float> m_zoomedInputPolynomial; // 0x58 (88)
		float m_accelerationInputThreshold; // 0x60 (96)
		float m_accelerationMultiplier; // 0x64 (100)
		float m_accelerationDamping; // 0x68 (104)
		float m_accelerationTimeThreshold; // 0x6C (108)
		float m_squaredAcceleration; // 0x70 (112)
		Vec2 m_maxAcceleration; // 0x74 (116)
		float m_yawSpeedStrength; // 0x7C (124)
		float m_pitchSpeedStrength; // 0x80 (128)
		Vec2 m_attractDistanceFallOffs; // 0x84 (132)
		float m_attractSoftZone; // 0x8C (140)
		float m_attractUserInputMultiplier; // 0x90 (144)
		float m_attractUserInputMultiplier_NoZoom; // 0x94 (148)
		float m_attractOwnSpeedInfluence; // 0x98 (152)
		float m_attractTargetSpeedInfluence; // 0x9C (156)
		float m_attractOwnRequiredMovementForMaximumAttract; // 0xA0 (160)
		float m_attractStartInputThreshold; // 0xA4 (164)
		float m_attractMoveInputCap; // 0xA8 (168)
		float m_attractYawStrength; // 0xAC (172)
		float m_attractPitchStrength; // 0xB0 (176)
		float m_maxToTargetAngle; // 0xB4 (180)
		float m_maxToTargetXZAngle; // 0xB8 (184)
		float m_viewObstructedKeepTime; // 0xBC (188)
		float m_snapZoomLateralSpeedLimit; // 0xC0 (192)
		float m_snapZoomTime; // 0xC4 (196)
		float m_snapZoomPostTimeNoInput; // 0xC8 (200)
		float m_snapZoomPostTime; // 0xCC (204)
		u32 m_snapZoomReticlePointPriority; // 0xD0 (208)
		float m_snapZoomAutoEngageTime; // 0xD4 (212)
		float m_snapZoomBreakTimeAtMaxInput; // 0xD8 (216)
		float m_snapZoomBreakMaxInput; // 0xDC (220)
		float m_snapZoomBreakMinAngle; // 0xE0 (224)
		float m_snapZoomSpamGuardTime; // 0xE4 (228)
		CtrRef<SkeletonCollisionData> m_soldierBackupSkeletonCollisionData; // 0xE8 (232)
		float m_checkBoneCenterOnlyDistance; // 0xF0 (240)
		float m_disableForcedTargetRecalcDistance; // 0xF4 (244)
		float m_overrideAimingRange; // 0xF8 (248)
		float m_overrideAimingRangeCrouch; // 0xFC (252)
		float m_overrideAimingRangeProne; // 0x100 (256)
		bool m_useYawAcceleration; // 0x104 (260)
		bool m_usePitchAcceleration; // 0x105 (261)
		bool m_snapZoomUserShorterWeaponTime; // 0x106 (262)
		bool m_snapZoomPostTimeDynamicPoint; // 0x107 (263)
		bool m_forceSoldierBackupSkeletonCollisionUse; // 0x108 (264)
	}; // 0x110 (272)
}

