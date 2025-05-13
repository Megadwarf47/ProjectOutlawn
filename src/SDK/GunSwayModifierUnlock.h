///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class GunSwayModifierData;
}

namespace fb {
	struct GunSwayModifierUnlock {
		GunSwayModifierUnlock() {
		};

		Guid m_unlockAssetGuid; // 0x0 (0)
		CtrRef<GunSwayModifierData> m_modifier; // 0x10 (16)
	}; // 0x18 (24)
}

