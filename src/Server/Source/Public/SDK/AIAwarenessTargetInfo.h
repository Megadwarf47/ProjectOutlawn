///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIAwarenessTargetType.h>
#include <fb/Types.h>

namespace fb {
	struct AIAwarenessTargetInfo {
		AIAwarenessTargetInfo() {
			m_priority = 1.f;
			m_targetType = AIAwarenessTargetType::AIAwarenessTargetType_LookAt;
			m_targetRange = 1.f;
			m_mustBeInsideFrustum = true;
		};

		float m_priority; // 0x0 (0)
		AIAwarenessTargetType m_targetType; // 0x4 (4)
		float m_targetRange; // 0x8 (8)
		bool m_mustBeInsideFrustum; // 0xC (12)
	}; // 0x10 (16)
}

