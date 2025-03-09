///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterPoseType.h>
#include <fb/Types.h>

namespace fb {
	struct PoseTransitionTime {
		PoseTransitionTime() {
			m_toPose = CharacterPoseType::CharacterPoseType_Stand;
			m_transitionTime = 0.5f;
		};

		CharacterPoseType m_toPose; // 0x0 (0)
		float m_transitionTime; // 0x4 (4)
	}; // 0x8 (8)
}

