///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class SoundScopeData;
	class SoundScopeStrategyData;
}

namespace fb {
	struct SoundScopeStrategyMapping {
		SoundScopeStrategyMapping() {
		};

		CtrRef<SoundScopeData> m_scope; // 0x0 (0)
		CtrRef<SoundScopeStrategyData> m_strategy; // 0x8 (8)
	}; // 0x10 (16)
}

