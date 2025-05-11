///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct CameraSineCurveData {
		CameraSineCurveData() {
			m_frequency = 1.f;
			m_amplitude = 1.f;
			m_phaseShift = 0.f;
		};

		float m_frequency; // 0x0 (0)
		float m_amplitude; // 0x4 (4)
		float m_phaseShift; // 0x8 (8)
	}; // 0xC (12)
}

