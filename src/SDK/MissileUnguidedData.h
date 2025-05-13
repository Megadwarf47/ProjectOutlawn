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
	struct MissileUnguidedData {
		MissileUnguidedData() {
			m_useStaticPosition = false;
			m_useTargetPosition = false;
		};

		Vec2 m_staticPosition; // 0x0 (0)
		Vec2 m_targetPositionOffset; // 0x8 (8)
		bool m_useStaticPosition; // 0x10 (16)
		bool m_useTargetPosition; // 0x11 (17)
	}; // 0x14 (20)
}

