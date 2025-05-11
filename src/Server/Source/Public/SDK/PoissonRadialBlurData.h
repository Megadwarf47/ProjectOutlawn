///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec2.h>

namespace fb {
	struct PoissonRadialBlurData {
		PoissonRadialBlurData() {
			m_blendFactor = 1.f;
			m_poissonDiscScale = Vec2(0.04f, 0.01f);
			m_radialScale = 1.f;
			m_radialExponent = 2.f;
		};

		float m_blendFactor; // 0x0 (0)
		Vec2 m_poissonDiscScale; // 0x4 (4)
		float m_radialScale; // 0xC (12)
		float m_radialExponent; // 0x10 (16)
	}; // 0x14 (20)
}

