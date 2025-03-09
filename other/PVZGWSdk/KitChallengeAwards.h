///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ChallengeAwardStatus.h>
#include <fb/Types.h>

namespace fb {
	struct KitChallengeAwards {
		KitChallengeAwards() {
		};

		Guid m_kitCustomizationGuid; // 0x0 (0)
		Array<ChallengeAwardStatus> m_awards; // 0x10 (16)
	}; // 0x18 (24)
}

