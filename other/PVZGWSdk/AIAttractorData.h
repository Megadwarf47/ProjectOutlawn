///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterType.h>
#include <fb/Types.h>

namespace fb {
	struct AIAttractorData {
		AIAttractorData() {
			m_characterType = CharacterType::Character_Unknown;
			m_range = 0.f;
			m_priorityModifier = 1.f;
			m_exclude = false;
			m_requiresLineOfSight = true;
		};

		CharacterType m_characterType; // 0x0 (0)
		float m_range; // 0x4 (4)
		float m_priorityModifier; // 0x8 (8)
		bool m_exclude; // 0xC (12)
		bool m_requiresLineOfSight; // 0xD (13)
	}; // 0x10 (16)
}

