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
	struct Ps4CountryAgeOverrides {
		Ps4CountryAgeOverrides() {
			m_ageRequirement = 0;
		};

		String m_countryCode; // 0x0 (0)
		s32 m_ageRequirement; // 0x8 (8)
	}; // 0x10 (16)
}

