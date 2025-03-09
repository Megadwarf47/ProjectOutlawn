///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class MotorbikeData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MotorbikeData"); }
		virtual ~MotorbikeData() override {}
		MotorbikeData() {
			m_maxLeaningRoll = 0.65f;
			m_counterLeanForce = 25.f;
			m_dampBigJumpImpactCounterForce = Vec3(0.f, 32.f, 20.f);
			m_wheelieForce = Vec3(0.f, -3000.f, 2400.f);
			m_wheelieForceBodyOffset = Vec3(0.f, 0.f, 0.6f);
			m_standStillLeanForce = 20.f;
			m_leanForce = 30.f;
			m_jumpForwardLeanMinAngle = -0.16f;
			m_jumpForwardLeanMomentum = 20.f;
			m_jumpForwardLeanMinNoContactTime = 0.2f;
			m_leanForceMaxVel = 70.f;
			m_kickstandRoll = -0.25f;
			m_kickstandLinearDamping = 0.7f;
			m_standStillRoll = 0.17f;
			m_dampBigJumpImpactVelocity = -20.f;
			m_dampBigJumpMaxSpringForceFraction = 0.6f;
			m_dampBigJumpImpactVerticalVelocity = 0.2f;
			m_yawBrakeDampingLerpStartScale = 10.f;
			m_yawBrakeDampingLerpEndScale = 0.1f;
			m_stoppieActivationVelocity = 50.f;
			m_stoppieStartVelocity = 30.f;
			m_stoppieStopVelocity = 7.f;
			m_stoppieMomentum = 76.f;
			m_shortOffgroundGravityMultiplier = 1.7f;
			m_shortOffgroundPeriod = 0.4f;
			m_wheelieSwitchOffNoContactTime = 0.5f;
			m_wheelieMaxNoDownForceContactTime = 0.05f;
			m_wheelieMaxNoContactTime = 0.2f;
			m_wheelieSteeringFactor = 0.4f;
			m_wheelieInertia = 10.f;
			m_wheelieStartVelocity = 15.f;
			m_wheelieMaxVelocityUndamped = 70.f;
			m_wheelieMaxVelocityDampRange = 40.f;
			m_wheelieOutAngularMomentum = 5.f;
			m_wheelieSpringDamping = 0.1f;
			m_wheelieSpringKScale = 3.f;
			m_wheelieAngularDamping = 10.f;
			m_wheelieAngularDampingSpeed = 1.5f;
			m_wheelieMaxAngle = 0.75f;
			m_wheelieMaxVelocity = 200.f;
			m_wheelieVelocityForceScale = 1.f;
			m_wheelieAngularStartMomentum = 400.f;
			m_dampBigJumpImpact = true;
		};

		float m_maxLeaningRoll; // 0x10 (16)
		float m_counterLeanForce; // 0x14 (20)
		Vec3 m_dampBigJumpImpactCounterForce; // 0x20 (32)
		Vec3 m_wheelieForce; // 0x30 (48)
		Vec3 m_wheelieForceBodyOffset; // 0x40 (64)
		float m_standStillLeanForce; // 0x50 (80)
		float m_leanForce; // 0x54 (84)
		float m_jumpForwardLeanMinAngle; // 0x58 (88)
		float m_jumpForwardLeanMomentum; // 0x5C (92)
		float m_jumpForwardLeanMinNoContactTime; // 0x60 (96)
		float m_leanForceMaxVel; // 0x64 (100)
		float m_kickstandRoll; // 0x68 (104)
		float m_kickstandLinearDamping; // 0x6C (108)
		float m_standStillRoll; // 0x70 (112)
		float m_dampBigJumpImpactVelocity; // 0x74 (116)
		float m_dampBigJumpMaxSpringForceFraction; // 0x78 (120)
		float m_dampBigJumpImpactVerticalVelocity; // 0x7C (124)
		float m_yawBrakeDampingLerpStartScale; // 0x80 (128)
		float m_yawBrakeDampingLerpEndScale; // 0x84 (132)
		float m_stoppieActivationVelocity; // 0x88 (136)
		float m_stoppieStartVelocity; // 0x8C (140)
		float m_stoppieStopVelocity; // 0x90 (144)
		float m_stoppieMomentum; // 0x94 (148)
		float m_shortOffgroundGravityMultiplier; // 0x98 (152)
		float m_shortOffgroundPeriod; // 0x9C (156)
		float m_wheelieSwitchOffNoContactTime; // 0xA0 (160)
		float m_wheelieMaxNoDownForceContactTime; // 0xA4 (164)
		float m_wheelieMaxNoContactTime; // 0xA8 (168)
		float m_wheelieSteeringFactor; // 0xAC (172)
		float m_wheelieInertia; // 0xB0 (176)
		float m_wheelieStartVelocity; // 0xB4 (180)
		float m_wheelieMaxVelocityUndamped; // 0xB8 (184)
		float m_wheelieMaxVelocityDampRange; // 0xBC (188)
		float m_wheelieOutAngularMomentum; // 0xC0 (192)
		float m_wheelieSpringDamping; // 0xC4 (196)
		float m_wheelieSpringKScale; // 0xC8 (200)
		float m_wheelieAngularDamping; // 0xCC (204)
		float m_wheelieAngularDampingSpeed; // 0xD0 (208)
		float m_wheelieMaxAngle; // 0xD4 (212)
		float m_wheelieMaxVelocity; // 0xD8 (216)
		float m_wheelieVelocityForceScale; // 0xDC (220)
		float m_wheelieAngularStartMomentum; // 0xE0 (224)
		bool m_dampBigJumpImpact; // 0xE4 (228)
	}; // 0xF0 (240)
}

