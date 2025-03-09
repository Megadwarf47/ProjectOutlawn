///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class LevelDescriptionComponent;
}

namespace fb {
	struct LevelDescription {
		LevelDescription() {
			m_listAsCoop = false;
			m_isEpilogue = false;
		};

		String m_name; // 0x0 (0)
		String m_description; // 0x8 (8)
		RefArray<LevelDescriptionComponent> m_components; // 0x10 (16)
		bool m_listAsCoop; // 0x18 (24)
		bool m_isEpilogue; // 0x19 (25)
	}; // 0x20 (32)
}

