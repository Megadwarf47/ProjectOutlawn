///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BlueprintBundlePreloadInfo.h>
#include <fb/LevelSetup.h>
#include <fb/Types.h>

namespace fb {
	struct LoadLevelInfo {
		LoadLevelInfo() {
			m_levelSequenceNumber = 0;
		};

		LevelSetup m_setup; // 0x0 (0)
		Array<BlueprintBundlePreloadInfo> m_blueprintBundlePreloads; // 0x38 (56)
		u32 m_levelSequenceNumber; // 0x40 (64)
	}; // 0x48 (72)
}

