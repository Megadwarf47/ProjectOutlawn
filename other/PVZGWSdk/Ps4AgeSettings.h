///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Ps4CountryAgeOverrides.h>
#include <fb/Types.h>

namespace fb {
	struct Ps4AgeSettings {
		Ps4AgeSettings() {
			m_defaultAgeRequirement = 0;
		};

		s32 m_defaultAgeRequirement; // 0x0 (0)
		Array<Ps4CountryAgeOverrides> m_ageOverrides; // 0x8 (8)
	}; // 0x10 (16)
}

