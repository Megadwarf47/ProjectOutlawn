///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct PressureDifficultyData {
		PressureDifficultyData() {
			m_weightLimit = 10.f;
			m_meleePressureLimit = 10.f;
			m_rangedPressureLimit = 10.f;
			m_allowTargetOverLimit = true;
		};

		float m_weightLimit; // 0x0 (0)
		float m_meleePressureLimit; // 0x4 (4)
		float m_rangedPressureLimit; // 0x8 (8)
		bool m_allowTargetOverLimit; // 0xC (12)
	}; // 0x10 (16)
}

