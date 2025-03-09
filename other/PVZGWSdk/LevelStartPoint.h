///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct LevelStartPoint {
		LevelStartPoint() {
			m_isDefault = false;
		};

		String m_name; // 0x0 (0)
		Array<String> m_autoloadSublevels; // 0x8 (8)
		bool m_isDefault; // 0x10 (16)
	}; // 0x18 (24)
}

