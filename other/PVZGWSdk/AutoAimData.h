///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterPoseType.h>
#include <fb/Vec3.h>

namespace fb {
	struct AutoAimData {
		AutoAimData() {
			m_autoAimOuterBoxOffset = Vec3(0.f, 1.2f, 0.f);
			m_autoAimOuterBoxExtends = Vec3(0.75f, 1.f, 0.75f);
			m_autoAimInnerBoxOffset = Vec3(0.f, 1.2f, 0.f);
			m_autoAimInnerBoxExtends = Vec3(0.25f, 0.25f, 0.25f);
			m_poseType = CharacterPoseType::CharacterPoseType_Stand;
		};

		Vec3 m_autoAimOuterBoxOffset; // 0x0 (0)
		Vec3 m_autoAimOuterBoxExtends; // 0x10 (16)
		Vec3 m_autoAimInnerBoxOffset; // 0x20 (32)
		Vec3 m_autoAimInnerBoxExtends; // 0x30 (48)
		CharacterPoseType m_poseType; // 0x40 (64)
	}; // 0x50 (80)
}

