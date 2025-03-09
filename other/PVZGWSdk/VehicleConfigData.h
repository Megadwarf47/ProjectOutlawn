///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntiRollBars.h>
#include <fb/Array.h>
#include <fb/ConstantForceData.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/InputThrottle.h>
#include <fb/StabilizerSettings.h>
#include <fb/Vec3.h>
#include <fb/VehicleInputData.h>
#include <fb/VehicleMode.h>

namespace fb {
	class AeroDynamicPhysicsData;
	class FloatPhysicsData;
	class MotionDampingData;
	class MotorbikeData;
	class StabilizerData;
}

namespace fb {
	class VehicleConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleConfigData"); }
		virtual ~VehicleConfigData() override {}
		VehicleConfigData() {
			m_inertiaModifier = Vec3(1.f, 1.f, 1.f);
			m_proximityExtScale = Vec3(1.334f, 1.334f, 1.334f);
			m_vehicleModeAtReset = VehicleMode::VmIdle;
			m_bodyMass = 5000.f;
			m_gravityModifier = 1.f;
			m_yawMin = -1.f;
			m_yawMax = 1.f;
			m_downForceBaseFactor = 8.f;
			m_downForceWheelFactor = 40.f;
			m_vehicleModeChangeEnteringTime = 1.f;
			m_vehicleModeChangeStartingTime = 3.f;
			m_vehicleModeChangeStoppingTime = 1.f;
			m_vehicleModeChangeLeavingTime = 3.f;
			m_standStillLowSpeedTimeLimit = 2.f;
			m_staticFrictionBreakCollisionMod = 1.f;
			m_staticFrictionBreakVelocityMod = 1.f;
			m_coefficientOfAirFriction = 0.5f;
			m_airDensity = 1.225f;
			m_airDragArea = 9.f;
			m_windResistanceBaseFactor = 0.2f;
			m_windResistanceVelocityFactor = 100.f;
			m_windResistanceVelocityFactorMin = 1.f;
			m_windResistanceVelocityFactorMax = 4.f;
			m_maxGroundSpeed = 0.f;
			m_proximityHeightTranslation = -1.f;
			m_frictionAtLowVelocity = 0.f;
			m_useDownForce = false;
			m_useDownForceWheelFactor = true;
			m_useGearbox = true;
			m_useStandStillBrake = true;
			m_useStandStillSleep = true;
			m_useTurnAroundForce = false;
			m_useMotorcycleControl = false;
			m_invertPitchAllowed = false;
			m_useWindResistance = true;
		};

		CtrRef<AeroDynamicPhysicsData> m_aeroDynamicPhysics; // 0x10 (16)
		CtrRef<MotorbikeData> m_motorbikePhysics; // 0x18 (24)
		Vec3 m_centerOfMass; // 0x20 (32)
		Vec3 m_centerOfMassHandlingOffset; // 0x30 (48)
		Vec3 m_inertiaOverride; // 0x40 (64)
		Vec3 m_inertiaModifier; // 0x50 (80)
		Vec3 m_proximityExtScale; // 0x60 (96)
		CtrRef<MotionDampingData> m_motionDamping; // 0x70 (112)
		VehicleInputData m_input; // 0x78 (120)
		CtrRef<FloatPhysicsData> m_floatPhysics; // 0xC8 (200)
		CtrRef<StabilizerData> m_stabilizer; // 0xD0 (208)
		Array<StabilizerSettings> m_stabilizers; // 0xD8 (216)
		Array<ConstantForceData> m_constantForce; // 0xE0 (224)
		VehicleMode m_vehicleModeAtReset; // 0xE8 (232)
		float m_bodyMass; // 0xEC (236)
		float m_gravityModifier; // 0xF0 (240)
		float m_yawMin; // 0xF4 (244)
		float m_yawMax; // 0xF8 (248)
		float m_downForceBaseFactor; // 0xFC (252)
		float m_downForceWheelFactor; // 0x100 (256)
		float m_vehicleModeChangeEnteringTime; // 0x104 (260)
		float m_vehicleModeChangeStartingTime; // 0x108 (264)
		float m_vehicleModeChangeStoppingTime; // 0x10C (268)
		float m_vehicleModeChangeLeavingTime; // 0x110 (272)
		float m_standStillLowSpeedTimeLimit; // 0x114 (276)
		float m_staticFrictionBreakCollisionMod; // 0x118 (280)
		float m_staticFrictionBreakVelocityMod; // 0x11C (284)
		float m_coefficientOfAirFriction; // 0x120 (288)
		float m_airDensity; // 0x124 (292)
		float m_airDragArea; // 0x128 (296)
		float m_windResistanceBaseFactor; // 0x12C (300)
		float m_windResistanceVelocityFactor; // 0x130 (304)
		float m_windResistanceVelocityFactorMin; // 0x134 (308)
		float m_windResistanceVelocityFactorMax; // 0x138 (312)
		InputThrottle m_useInputYawAsThrottle; // 0x13C (316)
		AntiRollBars m_antiRollBars; // 0x150 (336)
		float m_maxGroundSpeed; // 0x160 (352)
		float m_proximityHeightTranslation; // 0x164 (356)
		float m_frictionAtLowVelocity; // 0x168 (360)
		bool m_useDownForce; // 0x16C (364)
		bool m_useDownForceWheelFactor; // 0x16D (365)
		bool m_useGearbox; // 0x16E (366)
		bool m_useStandStillBrake; // 0x16F (367)
		bool m_useStandStillSleep; // 0x170 (368)
		bool m_useTurnAroundForce; // 0x171 (369)
		bool m_useMotorcycleControl; // 0x172 (370)
		bool m_invertPitchAllowed; // 0x173 (371)
		bool m_useWindResistance; // 0x174 (372)
	}; // 0x180 (384)
}

