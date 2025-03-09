///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AwarenessTargetType.h>
#include <fb/Types.h>

namespace fb {
	struct AwarenessTargetInfo {
		AwarenessTargetInfo() {
			m_priority = 1.f;
			m_targetType = AwarenessTargetType::AwarenessTargetType_LookAt;
			m_targetRange = 1.f;
			m_mustBeInsideFrustum = true;
		};

		float m_priority; // 0x0 (0)
		AwarenessTargetType m_targetType; // 0x4 (4)
		float m_targetRange; // 0x8 (8)
		bool m_mustBeInsideFrustum; // 0xC (12)
	}; // 0x10 (16)
}

