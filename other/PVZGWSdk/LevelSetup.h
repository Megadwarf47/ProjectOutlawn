///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LevelSetupOption.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct LevelSetup {
		LevelSetup() {
			m_difficultyIndex = 0;
			m_isSaveGame = false;
			m_forceReloadResources = false;
		};

		String m_name; // 0x0 (0)
		Array<LevelSetupOption> m_inclusionOptions; // 0x8 (8)
		u32 m_difficultyIndex; // 0x10 (16)
		Array<String> m_subLevelNames; // 0x18 (24)
		String m_startPoint; // 0x20 (32)
		Array<s32> m_subLevelStates; // 0x28 (40)
		bool m_isSaveGame; // 0x30 (48)
		bool m_forceReloadResources; // 0x31 (49)
	}; // 0x38 (56)
}

