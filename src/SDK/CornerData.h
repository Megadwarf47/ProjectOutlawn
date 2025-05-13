///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CornerType.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct CornerData {
		CornerData() {
			m_cornerType = CornerType::CORNER_NOT_A_LINK;
			m_goal = false;
		};

		Vec3 m_pos; // 0x0 (0)
		CornerType m_cornerType; // 0x10 (16)
		bool m_goal; // 0x14 (20)
	}; // 0x20 (32)
}

