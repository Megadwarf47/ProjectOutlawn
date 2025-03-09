///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TurnEffectData {
		TurnEffectData() {
			m_maxRollAngle = 0.f;
			m_maxPitchAngle = 0.f;
			m_yawVelocityThreshhold = 10.f;
			m_velocityThreshhold = 10.f;
			m_safeTime = 0.1f;
			m_beginTime = 0.2f;
			m_holdTime = 0.2f;
			m_endTime = 0.2f;
		};

		float m_maxRollAngle; // 0x0 (0)
		float m_maxPitchAngle; // 0x4 (4)
		float m_yawVelocityThreshhold; // 0x8 (8)
		float m_velocityThreshhold; // 0xC (12)
		float m_safeTime; // 0x10 (16)
		float m_beginTime; // 0x14 (20)
		float m_holdTime; // 0x18 (24)
		float m_endTime; // 0x1C (28)
	}; // 0x20 (32)
}

