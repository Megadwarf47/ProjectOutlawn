///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Ps3AgeLevels.h>
#include <fb/String.h>

namespace fb {
	class Ps3ParentalLockAgeSettingsOverrides;
}

namespace fb {
	struct Ps3ParentalLockAgeSettings {
		Ps3ParentalLockAgeSettings() {
		};

		String m_region; // 0x0 (0)
		Ps3AgeLevels m_ageLevels; // 0x8 (8)
		CtrRef<Ps3ParentalLockAgeSettingsOverrides> m_countryOverrides; // 0x18 (24)
	}; // 0x20 (32)
}

