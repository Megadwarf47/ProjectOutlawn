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
	struct RibbonPointData {
		RibbonPointData() {
			m_userMaskLeft = Vec4(1.f, 1.f, 1.f, 1.f);
			m_userMaskRight = Vec4(1.f, 1.f, 1.f, 1.f);
			m_left = 5.f;
			m_right = -5.f;
		};

		Vec4 m_userMaskLeft; // 0x0 (0)
		Vec4 m_userMaskRight; // 0x10 (16)
		float m_left; // 0x20 (32)
		float m_right; // 0x24 (36)
	}; // 0x30 (48)
}

