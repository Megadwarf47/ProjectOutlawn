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
	struct VegetationEffectSlot {
		VegetationEffectSlot() {
			m_strengthMin = 0.f;
			m_strengthMax = 100.f;
			m_sizeMin = 0.f;
			m_sizeMax = 100.f;
		};

		CtrRef<EffectBlueprint> m_effect; // 0x0 (0)
		float m_strengthMin; // 0x8 (8)
		float m_strengthMax; // 0xC (12)
		float m_sizeMin; // 0x10 (16)
		float m_sizeMax; // 0x14 (20)
	}; // 0x18 (24)
}

