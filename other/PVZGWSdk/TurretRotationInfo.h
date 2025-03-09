///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RotationAxis.h>
#include <fb/RotationChannel.h>
#include <fb/Types.h>

namespace fb {
	struct TurretRotationInfo {
		TurretRotationInfo() {
			m_rotationAxis = RotationAxis::raY;
			m_channel = RotationChannel::RotationChannel_Yaw;
			m_maxRotation = 180.f;
			m_minRotation = -180.f;
			m_phaseOffset = 0.f;
			m_normalizeRotation = true;
			m_invertRotation = false;
		};

		RotationAxis m_rotationAxis; // 0x0 (0)
		RotationChannel m_channel; // 0x4 (4)
		float m_maxRotation; // 0x8 (8)
		float m_minRotation; // 0xC (12)
		float m_phaseOffset; // 0x10 (16)
		bool m_normalizeRotation; // 0x14 (20)
		bool m_invertRotation; // 0x15 (21)
	}; // 0x18 (24)
}

