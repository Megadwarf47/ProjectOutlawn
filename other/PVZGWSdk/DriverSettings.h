///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class RegulatedSteering;
}

namespace fb {
	class DriverSettings : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DriverSettings"); }
		virtual ~DriverSettings() override {}
		DriverSettings() {
			m_minRadius = 3.f;
			m_radiusGrowthSpeed = 0.2f;
			m_stoppingDeceleration = 10.f;
			m_steeringSensitivity = 25.f;
			m_maxBrakeOutput = 1.f;
			m_lookAheadTime = 1.f;
			m_angleDiffForNoSlowdown = 50.f;
			m_angleDiffForFullSlowdown = 90.f;
			m_velocityAtFullSlowdown = 5.f;
			m_velDiffAtMinAcc = 0.1f;
			m_velDiffAtMaxAcc = 7.f;
			m_minAcc = 0.f;
			m_maxAcc = 8.f;
			m_velDiffAtMinDec = 0.1f;
			m_velDiffAtMaxDec = 5.f;
			m_minDec = 0.f;
			m_maxDec = 25.f;
			m_accDiffAtMinThrottleVelocityAccelerating = 1.f;
			m_accDiffAtMaxThrottleVelocityAccelerating = 20.f;
			m_minThrottleVelocityAccelerating = 0.2f;
			m_maxThrottleVelocityAccelerating = 1.f;
			m_accDiffAtMinThrottleVelocityDecelerating = 3.f;
			m_accDiffAtMaxThrottleVelocityDecelerating = 10.f;
			m_minThrottleVelocityDecelerating = 0.1f;
			m_maxThrottleVelocityDecelerating = 5.f;
			m_p = 0.1f;
			m_i = 0.01f;
			m_d = 0.01f;
			m_maxError = 100.f;
			m_maxSumError = 100.f;
			m_maxPTerm = 1.f;
			m_maxITerm = 1.f;
			m_maxYawToApplySprint = 0.3f;
			m_maxAngleDiffToApplySprint = 0.f;
			m_maxAngularVelocityToApplySprint = 0.f;
			m_minVelocityToApplySprint = 0.f;
			m_lookAheadAimTime = 0.f;
			m_minLookAheadDist = 0.f;
			m_squareBrakeOutput = true;
			m_useSquareVelDiffCurveAcc = false;
			m_useSquareVelDiffCurveDec = true;
			m_useSquareAccDiffCurveAcc = false;
			m_useSquareAccDiffCurveDec = false;
			m_usePIDRegulator = false;
			m_includeYDifference = true;
		};

		float m_minRadius; // 0x18 (24)
		float m_radiusGrowthSpeed; // 0x1C (28)
		float m_stoppingDeceleration; // 0x20 (32)
		float m_steeringSensitivity; // 0x24 (36)
		CtrRef<RegulatedSteering> m_regulatedSteering; // 0x28 (40)
		float m_maxBrakeOutput; // 0x30 (48)
		float m_lookAheadTime; // 0x34 (52)
		float m_angleDiffForNoSlowdown; // 0x38 (56)
		float m_angleDiffForFullSlowdown; // 0x3C (60)
		float m_velocityAtFullSlowdown; // 0x40 (64)
		float m_velDiffAtMinAcc; // 0x44 (68)
		float m_velDiffAtMaxAcc; // 0x48 (72)
		float m_minAcc; // 0x4C (76)
		float m_maxAcc; // 0x50 (80)
		float m_velDiffAtMinDec; // 0x54 (84)
		float m_velDiffAtMaxDec; // 0x58 (88)
		float m_minDec; // 0x5C (92)
		float m_maxDec; // 0x60 (96)
		float m_accDiffAtMinThrottleVelocityAccelerating; // 0x64 (100)
		float m_accDiffAtMaxThrottleVelocityAccelerating; // 0x68 (104)
		float m_minThrottleVelocityAccelerating; // 0x6C (108)
		float m_maxThrottleVelocityAccelerating; // 0x70 (112)
		float m_accDiffAtMinThrottleVelocityDecelerating; // 0x74 (116)
		float m_accDiffAtMaxThrottleVelocityDecelerating; // 0x78 (120)
		float m_minThrottleVelocityDecelerating; // 0x7C (124)
		float m_maxThrottleVelocityDecelerating; // 0x80 (128)
		float m_p; // 0x84 (132)
		float m_i; // 0x88 (136)
		float m_d; // 0x8C (140)
		float m_maxError; // 0x90 (144)
		float m_maxSumError; // 0x94 (148)
		float m_maxPTerm; // 0x98 (152)
		float m_maxITerm; // 0x9C (156)
		float m_maxYawToApplySprint; // 0xA0 (160)
		float m_maxAngleDiffToApplySprint; // 0xA4 (164)
		float m_maxAngularVelocityToApplySprint; // 0xA8 (168)
		float m_minVelocityToApplySprint; // 0xAC (172)
		float m_lookAheadAimTime; // 0xB0 (176)
		float m_minLookAheadDist; // 0xB4 (180)
		bool m_squareBrakeOutput; // 0xB8 (184)
		bool m_useSquareVelDiffCurveAcc; // 0xB9 (185)
		bool m_useSquareVelDiffCurveDec; // 0xBA (186)
		bool m_useSquareAccDiffCurveAcc; // 0xBB (187)
		bool m_useSquareAccDiffCurveDec; // 0xBC (188)
		bool m_usePIDRegulator; // 0xBD (189)
		bool m_includeYDifference; // 0xBE (190)
	}; // 0xC0 (192)
}

