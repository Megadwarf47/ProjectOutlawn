///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GamePlatform.h>
#include <fb/String.h>

namespace fb {
	struct GameConfigurationContentMapping {
		GameConfigurationContentMapping() {
			m_platform = GamePlatform::GamePlatform_Ps3;
		};

		GamePlatform m_platform; // 0x0 (0)
		String m_license; // 0x8 (8)
		Array<String> m_content; // 0x10 (16)
	}; // 0x18 (24)
}

