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
	class EffectBlueprint;
}

namespace fb {
	struct TauntEntry {
		TauntEntry() {
			m_tauntID = 0;
		};

		CtrRef<EffectBlueprint> m_tauntEffect; // 0x0 (0)
		u32 m_tauntID; // 0x8 (8)
	}; // 0x10 (16)
}

