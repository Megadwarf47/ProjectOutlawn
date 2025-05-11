///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/FrictionScaleAtVelocity.h>
#include <fb/MaterialDecl.h>
#include <fb/SensitivityAtVelocity.h>
#include <fb/SphereCollisionData.h>
#include <fb/SpringData.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class Curve2D;
	class RotationBodyData;
}

namespace fb {
	class WheelConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WheelConfigData"); }
		virtual ~WheelConfigData() override {}
		WheelConfigData() {
			m_mass = 10.f;
			m_radius = 0.5f;
			m_inertia = Vec3(2.f, 2.f, 2.f);
			m_width = 0.2f;
			m_rollingResistanceInternalBaseFactor = 15.f;
			m_rollingResistanceBaseFactor = 15.f;
			m_rollingResistanceVelocityFactor = 150.f;
			m_engineBrakeVelocityFactor = 25.f;
			m_engineBrakeMinFactor = 0.5f;
			m_engineBrakeMaxFactor = 1.f;
			m_diffGearRatio = 5.f;
			m_lowSpeedSteeringSensitivity = 1.f;
			m_midSpeedSteeringSensitivity = 1.f;
			m_highSpeedSteeringSensitivity = 1.f;
			m_sensitivityRangeScale = 1.f;
			m_lowSpeedSteeringSensitivityLimit = 20.f;
			m_midSpeedSteeringSensitivityLimit = 50.f;
			m_highSpeedSteeringSensitivityLimit = 70.f;
			m_trackedTurnSpeedLimit = 1.f;
			m_trackedForwardSpeedLimit = 1.f;
			m_trackedSlipSteerReductionScale = 1.f;
			m_trackedSteeringBoostOnOppositeTorque = 0.f;
			m_slopeGripMinAngle = 89.f;
			m_slopeGripMaxAngle = 90.f;
			m_slopeGripExponent = 1;
			m_offGroundGravityModifier = 1.f;
			m_sideSlipAngleMaxSlipCondition = 13.75f;
			m_angularVelocityMinSlipCondition = 2.85f;
			m_wheelVelocityXMinSlipCondition = 0.18f;
			m_wheelSlipRatioMaxSlipCondition = 0.125f;
			m_longitudinalFrictionForceMaxFactor = 100.f;
			m_lateralFrictionForceMaxFactor = 200.f;
			m_wheelFrictionLattitudeBrakeScale = 1.f;
			m_resistance = 0.f;
			m_fxTorqueRadiusMultiplier = 1.f;
			m_frictionMomentVelocityMin = 50.f;
			m_frictionMomentVelocityMax = 250.f;
			m_frictionMomentMultiplier = 100.f;
			m_frictionMomentMaxFactor = 20000.f;
			m_brakeFactor = 0.125f;
			m_brakeForce = 4000.f;
			m_handBrakeFactor = 0.f;
			m_handBrakeForce = 0.f;
			m_totalFrictionScale = 1.f;
			m_totalLateralFrictionScale = 1.f;
			m_lateralPosK = 5.002381f;
			m_lateralNegK = 0.053606f;
			m_longitudinalPosK = 5.39649f;
			m_longitudinalNegK = 0.176533f;
			m_alignMomScale = 0.126552f;
			m_wheelBaseLateral = 0.f;
			m_wheelBaseLongitudinal = 0.f;
			m_drivingType = 1;
			m_steeringType = 1;
			m_frictionMethod = 0;
			m_rotationDirectionIndex = 0;
			m_steeringAngleIndex = 1;
			m_pacejkaConfigIndex = 0;
			m_engineIndex = 0;
			m_ackermanDeviceType = 0;
			m_allowGripSlipTransition = true;
			m_autoHandBrakeIfNoThrottleAndSteer = false;
			m_useRollingResistanceVelocityFactor = true;
			m_useRollingResistanceBaseFactor = true;
			m_useEngineBrake = true;
			m_isAllowedToSpin = false;
			m_hasSteeringInverted = false;
			m_useFrictionMoment = true;
			m_useLowSpeedAutoBrake = true;
			m_adjustWheelRotation = false;
		};

		CtrRef<RotationBodyData> m_rotationBody; // 0x10 (16)
		SphereCollisionData m_sphereCollision; // 0x18 (24)
		SpringData m_spring; // 0x24 (36)
		float m_mass; // 0x44 (68)
		float m_radius; // 0x48 (72)
		Vec3 m_offset; // 0x50 (80)
		Vec3 m_inertia; // 0x60 (96)
		float m_width; // 0x70 (112)
		float m_rollingResistanceInternalBaseFactor; // 0x74 (116)
		float m_rollingResistanceBaseFactor; // 0x78 (120)
		float m_rollingResistanceVelocityFactor; // 0x7C (124)
		float m_engineBrakeVelocityFactor; // 0x80 (128)
		float m_engineBrakeMinFactor; // 0x84 (132)
		float m_engineBrakeMaxFactor; // 0x88 (136)
		Array<Vec2> m_transmissionLoss; // 0x90 (144)
		float m_diffGearRatio; // 0x98 (152)
		float m_lowSpeedSteeringSensitivity; // 0x9C (156)
		float m_midSpeedSteeringSensitivity; // 0xA0 (160)
		float m_highSpeedSteeringSensitivity; // 0xA4 (164)
		float m_sensitivityRangeScale; // 0xA8 (168)
		float m_lowSpeedSteeringSensitivityLimit; // 0xAC (172)
		float m_midSpeedSteeringSensitivityLimit; // 0xB0 (176)
		float m_highSpeedSteeringSensitivityLimit; // 0xB4 (180)
		float m_trackedTurnSpeedLimit; // 0xB8 (184)
		float m_trackedForwardSpeedLimit; // 0xBC (188)
		float m_trackedSlipSteerReductionScale; // 0xC0 (192)
		CtrRef<Curve2D> m_steerInertia; // 0xC8 (200)
		Array<SensitivityAtVelocity> m_steeringSensitivity; // 0xD0 (208)
		float m_trackedSteeringBoostOnOppositeTorque; // 0xD8 (216)
		float m_slopeGripMinAngle; // 0xDC (220)
		float m_slopeGripMaxAngle; // 0xE0 (224)
		s32 m_slopeGripExponent; // 0xE4 (228)
		float m_offGroundGravityModifier; // 0xE8 (232)
		float m_sideSlipAngleMaxSlipCondition; // 0xEC (236)
		float m_angularVelocityMinSlipCondition; // 0xF0 (240)
		float m_wheelVelocityXMinSlipCondition; // 0xF4 (244)
		float m_wheelSlipRatioMaxSlipCondition; // 0xF8 (248)
		float m_longitudinalFrictionForceMaxFactor; // 0xFC (252)
		float m_lateralFrictionForceMaxFactor; // 0x100 (256)
		Array<FrictionScaleAtVelocity> m_longitudeFrictionScale; // 0x108 (264)
		Array<FrictionScaleAtVelocity> m_lattitudeFrictionScale; // 0x110 (272)
		float m_wheelFrictionLattitudeBrakeScale; // 0x118 (280)
		float m_resistance; // 0x11C (284)
		float m_fxTorqueRadiusMultiplier; // 0x120 (288)
		float m_frictionMomentVelocityMin; // 0x124 (292)
		float m_frictionMomentVelocityMax; // 0x128 (296)
		float m_frictionMomentMultiplier; // 0x12C (300)
		float m_frictionMomentMaxFactor; // 0x130 (304)
		float m_brakeFactor; // 0x134 (308)
		float m_brakeForce; // 0x138 (312)
		float m_handBrakeFactor; // 0x13C (316)
		float m_handBrakeForce; // 0x140 (320)
		float m_totalFrictionScale; // 0x144 (324)
		float m_totalLateralFrictionScale; // 0x148 (328)
		float m_lateralPosK; // 0x14C (332)
		float m_lateralNegK; // 0x150 (336)
		float m_longitudinalPosK; // 0x154 (340)
		float m_longitudinalNegK; // 0x158 (344)
		float m_alignMomScale; // 0x15C (348)
		float m_wheelBaseLateral; // 0x160 (352)
		float m_wheelBaseLongitudinal; // 0x164 (356)
		s32 m_drivingType; // 0x168 (360)
		s32 m_steeringType; // 0x16C (364)
		s32 m_frictionMethod; // 0x170 (368)
		s32 m_rotationDirectionIndex; // 0x174 (372)
		s32 m_steeringAngleIndex; // 0x178 (376)
		s32 m_pacejkaConfigIndex; // 0x17C (380)
		s32 m_engineIndex; // 0x180 (384)
		s32 m_ackermanDeviceType; // 0x184 (388)
		MaterialDecl m_collisionMaterialPair; // 0x188 (392)
		bool m_allowGripSlipTransition; // 0x18C (396)
		bool m_autoHandBrakeIfNoThrottleAndSteer; // 0x18D (397)
		bool m_useRollingResistanceVelocityFactor; // 0x18E (398)
		bool m_useRollingResistanceBaseFactor; // 0x18F (399)
		bool m_useEngineBrake; // 0x190 (400)
		bool m_isAllowedToSpin; // 0x191 (401)
		bool m_hasSteeringInverted; // 0x192 (402)
		bool m_useFrictionMoment; // 0x193 (403)
		bool m_useLowSpeedAutoBrake; // 0x194 (404)
		bool m_adjustWheelRotation; // 0x195 (405)
	}; // 0x1A0 (416)
}

