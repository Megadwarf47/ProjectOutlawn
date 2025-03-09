///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct PID {
		PID() {
			m_p = 0.02f;
			m_i = 0.01f;
			m_d = 0.01f;
			m_maxError = 45.f;
			m_maxPTerm = 1.f;
			m_maxITerm = 1.f;
			m_maxSumError = 45.f;
		};

		float m_p; // 0x0 (0)
		float m_i; // 0x4 (4)
		float m_d; // 0x8 (8)
		float m_maxError; // 0xC (12)
		float m_maxPTerm; // 0x10 (16)
		float m_maxITerm; // 0x14 (20)
		float m_maxSumError; // 0x18 (24)
	}; // 0x1C (28)
}

