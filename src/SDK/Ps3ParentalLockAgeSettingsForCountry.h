///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Ps3AgeLevels.h>
#include <fb/String.h>

namespace fb {
	struct Ps3ParentalLockAgeSettingsForCountry {
		Ps3ParentalLockAgeSettingsForCountry() {
		};

		String m_countryCode; // 0x0 (0)
		Ps3AgeLevels m_ageLevels; // 0x8 (8)
	}; // 0x18 (24)
}

