///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct PerformanceFpsHistogram {
		PerformanceFpsHistogram() {
			m_below5 = 0.f;
			m_below10 = 0.f;
			m_below15 = 0.f;
			m_below20 = 0.f;
			m_below25 = 0.f;
			m_below30 = 0.f;
			m_below35 = 0.f;
			m_below40 = 0.f;
			m_below45 = 0.f;
			m_below50 = 0.f;
			m_below55 = 0.f;
			m_below60 = 0.f;
			m_above60 = 0.f;
		};

		float m_below5; // 0x0 (0)
		float m_below10; // 0x4 (4)
		float m_below15; // 0x8 (8)
		float m_below20; // 0xC (12)
		float m_below25; // 0x10 (16)
		float m_below30; // 0x14 (20)
		float m_below35; // 0x18 (24)
		float m_below40; // 0x1C (28)
		float m_below45; // 0x20 (32)
		float m_below50; // 0x24 (36)
		float m_below55; // 0x28 (40)
		float m_below60; // 0x2C (44)
		float m_above60; // 0x30 (48)
	}; // 0x34 (52)
}

