///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Ps4AgeSettings.h>
#include <fb/String.h>

namespace fb {
	struct Ps4TitleData {
		Ps4TitleData() {
		};

		String m_desc; // 0x0 (0)
		String m_titleId; // 0x8 (8)
		String m_titleSecret; // 0x10 (16)
		Ps4AgeSettings m_ageSettings; // 0x18 (24)
	}; // 0x28 (40)
}

