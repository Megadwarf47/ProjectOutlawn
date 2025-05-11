///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/Array.h>
#include <fb/InspectAnimationTriggerData.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct InspectViewPointData {
		InspectViewPointData() {
			m_lookAtHeight = 0.f;
			m_yaw = 0.f;
			m_pitch = 0.f;
			m_distance = 2.f;
			m_fovOffset = 0.f;
			m_adjustmentYaw = 0.f;
			m_fixed = false;
		};

		String m_viewPointID; // 0x0 (0)
		Array<InspectAnimationTriggerData> m_animationTriggers; // 0x8 (8)
		Array<AntRef> m_continuousAnimationSignal; // 0x10 (16)
		float m_lookAtHeight; // 0x18 (24)
		float m_yaw; // 0x1C (28)
		float m_pitch; // 0x20 (32)
		float m_distance; // 0x24 (36)
		float m_fovOffset; // 0x28 (40)
		float m_adjustmentYaw; // 0x2C (44)
		bool m_fixed; // 0x30 (48)
	}; // 0x38 (56)
}

