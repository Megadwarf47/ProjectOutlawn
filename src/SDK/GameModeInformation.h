///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameModeSize.h>
#include <fb/GamePlatform.h>
#include <fb/Types.h>

namespace fb {
	struct GameModeInformation {
		GameModeInformation() {
			m_platform = GamePlatform::GamePlatform_Ps3;
			m_allowFallbackToDefault = false;
		};

		GamePlatform m_platform; // 0x0 (0)
		Array<GameModeSize> m_sizes; // 0x8 (8)
		GameModeSize m_defaultSize; // 0x10 (16)
		bool m_allowFallbackToDefault; // 0x40 (64)
	}; // 0x48 (72)
}

