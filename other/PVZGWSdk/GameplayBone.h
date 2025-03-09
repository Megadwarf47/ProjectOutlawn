///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameplayBones.h>
#include <fb/String.h>

namespace fb {
	struct GameplayBone {
		GameplayBone() {
			m_bone = GameplayBones::GameplayBones_UndefinedBone;
		};

		String m_name; // 0x0 (0)
		GameplayBones m_bone; // 0x8 (8)
	}; // 0x10 (16)
}

