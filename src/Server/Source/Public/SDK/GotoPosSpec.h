///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct GotoPosSpec {
		GotoPosSpec() {
			m_allowedToStopDist = 2.f;
			m_desiredStopDist = 0.f;
			m_stopAtGoal = true;
			m_pushThroughCrowdAtGoal = false;
			m_orientAtGoalEnable = false;
			m_tryFlank = false;
		};

		Vec3 m_orientAtGoalDir; // 0x0 (0)
		float m_allowedToStopDist; // 0x10 (16)
		float m_desiredStopDist; // 0x14 (20)
		bool m_stopAtGoal; // 0x18 (24)
		bool m_pushThroughCrowdAtGoal; // 0x19 (25)
		bool m_orientAtGoalEnable; // 0x1A (26)
		bool m_tryFlank; // 0x1B (27)
	}; // 0x20 (32)
}

