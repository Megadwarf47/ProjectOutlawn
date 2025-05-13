///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct CameraRelativeControlPerSpeedData {
		CameraRelativeControlPerSpeedData() {
			m_speedThreshold = 0.f;
			m_worldSpaceLockEfficiency = 1.f;
			m_worldSpaceLockEfficiencyAway = -1.f;
			m_throttleForSteeringHelp = 0.f;
			m_throttleForSteeringHelpStrength = 1.f;
			m_throttleHold = -1.f;
			m_minInputMagnitude = 0.2f;
			m_throttleExponent = 1.f;
			m_turningExponent = 1.f;
			m_fullTurningThreshold = 1.f;
			m_fullTurningBlending = 0.5f;
			m_extraForwardZoneAngle = 0.f;
			m_angularYawConstraint = 180.f;
			m_useInForwardAndNeutralGears = true;
			m_useInReverseGear = true;
			m_useInBoost = true;
			m_useNotInBoost = true;
			m_invertExtraForwardZoneIfBackwards = true;
			m_invertExtraForwardZoneOnSideFacingCamera = false;
		};

		float m_speedThreshold; // 0x0 (0)
		float m_worldSpaceLockEfficiency; // 0x4 (4)
		float m_worldSpaceLockEfficiencyAway; // 0x8 (8)
		float m_throttleForSteeringHelp; // 0xC (12)
		float m_throttleForSteeringHelpStrength; // 0x10 (16)
		float m_throttleHold; // 0x14 (20)
		float m_minInputMagnitude; // 0x18 (24)
		float m_throttleExponent; // 0x1C (28)
		float m_turningExponent; // 0x20 (32)
		float m_fullTurningThreshold; // 0x24 (36)
		float m_fullTurningBlending; // 0x28 (40)
		float m_extraForwardZoneAngle; // 0x2C (44)
		float m_angularYawConstraint; // 0x30 (48)
		bool m_useInForwardAndNeutralGears; // 0x34 (52)
		bool m_useInReverseGear; // 0x35 (53)
		bool m_useInBoost; // 0x36 (54)
		bool m_useNotInBoost; // 0x37 (55)
		bool m_invertExtraForwardZoneIfBackwards; // 0x38 (56)
		bool m_invertExtraForwardZoneOnSideFacingCamera; // 0x39 (57)
	}; // 0x3C (60)
}

