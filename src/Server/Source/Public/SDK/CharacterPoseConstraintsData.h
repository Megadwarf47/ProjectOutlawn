///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct CharacterPoseConstraintsData {
		CharacterPoseConstraintsData() {
			m_standPose = false;
			m_crouchPose = true;
			m_pronePose = false;
		};

		bool m_standPose; // 0x0 (0)
		bool m_crouchPose; // 0x1 (1)
		bool m_pronePose; // 0x2 (2)
	}; // 0x3 (3)
}

