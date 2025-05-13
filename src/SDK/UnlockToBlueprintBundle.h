///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct UnlockToBlueprintBundle {
		UnlockToBlueprintBundle() {
			m_isFirstPersonOnly = false;
		};

		Guid m_unlockAssetGuid; // 0x0 (0)
		String m_bundleName; // 0x10 (16)
		bool m_isFirstPersonOnly; // 0x18 (24)
	}; // 0x20 (32)
}

