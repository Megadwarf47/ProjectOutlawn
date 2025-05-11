///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuoyantParts.h>
#include <fb/Types.h>

namespace fb {
	struct BuoyantPartsData {
		BuoyantPartsData() {
			m_partName = BuoyantParts::BuoyantPart_Hips;
			m_buoyancy = 0.f;
		};

		BuoyantParts m_partName; // 0x0 (0)
		float m_buoyancy; // 0x4 (4)
	}; // 0x8 (8)
}

