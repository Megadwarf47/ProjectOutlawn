///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SpeedModifierData {
		SpeedModifierData() {
			m_forwardConstant = 1.f;
			m_backwardConstant = 1.f;
			m_leftConstant = 1.f;
			m_rightConstant = 1.f;
		};

		float m_forwardConstant; // 0x0 (0)
		float m_backwardConstant; // 0x4 (4)
		float m_leftConstant; // 0x8 (8)
		float m_rightConstant; // 0xC (12)
	}; // 0x10 (16)
}

