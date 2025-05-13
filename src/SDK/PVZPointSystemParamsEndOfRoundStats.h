///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZPointSystemParamsBoast.h>
#include <fb/PVZPointSystemParamsStat.h>

namespace fb {
	struct PVZPointSystemParamsEndOfRoundStats {
		PVZPointSystemParamsEndOfRoundStats() {
		};

		Array<PVZPointSystemParamsStat> m_stats; // 0x0 (0)
		Array<PVZPointSystemParamsBoast> m_boasts; // 0x8 (8)
	}; // 0x10 (16)
}

