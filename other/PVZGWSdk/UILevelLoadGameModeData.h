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
#include <fb/UILevelLoadIconData.h>

namespace fb {
	struct UILevelLoadGameModeData {
		UILevelLoadGameModeData() {
			m_packageIdentifier = 0;
		};

		String m_gameModeIdentifier; // 0x0 (0)
		u32 m_packageIdentifier; // 0x8 (8)
		Array<String> m_backgroundImagesPath; // 0x10 (16)
		Array<UILevelLoadIconData> m_iconData; // 0x18 (24)
	}; // 0x20 (32)
}

