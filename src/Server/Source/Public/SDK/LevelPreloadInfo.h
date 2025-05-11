///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SubLevelPreloadInfo.h>

namespace fb {
	struct LevelPreloadInfo {
		LevelPreloadInfo() {
		};

		Array<String> m_preloadedBlueprintBundles; // 0x0 (0)
		Array<SubLevelPreloadInfo> m_subLevelPreloadInfoMap; // 0x8 (8)
	}; // 0x10 (16)
}

