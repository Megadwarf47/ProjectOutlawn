///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec4.h>

namespace fb {
	struct PolynomialTempData {
		PolynomialTempData() {
			m_coefficients = Vec4(0.f, 0.f, 0.f, 1.f);
			m_scaleValue = 1.f;
			m_minClamp = 0.f;
			m_maxClamp = 1.f;
		};

		Vec4 m_coefficients; // 0x0 (0)
		float m_scaleValue; // 0x10 (16)
		float m_minClamp; // 0x14 (20)
		float m_maxClamp; // 0x18 (24)
	}; // 0x20 (32)
}

