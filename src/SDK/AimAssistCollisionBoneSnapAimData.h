///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimAssistCollisionBonePrioritiesData.h>
#include <fb/Types.h>

namespace fb {
	struct AimAssistCollisionBoneSnapAimData {
		AimAssistCollisionBoneSnapAimData() {
			m_bounding_LengthScale = 1.f;
			m_bounding_RadiusScale = 1.f;
			m_point_LengthScale = 1.f;
		};

		float m_bounding_LengthScale; // 0x0 (0)
		float m_bounding_RadiusScale; // 0x4 (4)
		float m_point_LengthScale; // 0x8 (8)
		AimAssistCollisionBonePrioritiesData m_point_Priorities; // 0xC (12)
		AimAssistCollisionBonePrioritiesData m_point_Priorities_BoneUnderReticle; // 0x18 (24)
	}; // 0x24 (36)
}

