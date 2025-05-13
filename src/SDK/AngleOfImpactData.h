///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct AngleOfImpactData {
		AngleOfImpactData() {
			m_zone12Delimiter = 30.f;
			m_zone23Delimiter = 60.f;
			m_zone1Multiplier = 1.f;
			m_zone2Multiplier = 1.f;
			m_zone3Multiplier = 1.f;
			m_enabled = false;
		};

		float m_zone12Delimiter; // 0x0 (0)
		float m_zone23Delimiter; // 0x4 (4)
		float m_zone1Multiplier; // 0x8 (8)
		float m_zone2Multiplier; // 0xC (12)
		float m_zone3Multiplier; // 0x10 (16)
		bool m_enabled; // 0x14 (20)
	}; // 0x18 (24)
}

