///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Vec3.h>

namespace fb {
	struct SoldierHeadCollisionPoseData {
		SoldierHeadCollisionPoseData() {
			m_idleOffset = Vec3(0.f, 165.f, 17.f);
			m_movingForwardOffset = Vec3(0.f, 160.f, 34.f);
		};

		Vec3 m_idleOffset; // 0x0 (0)
		Vec3 m_movingForwardOffset; // 0x10 (16)
	}; // 0x20 (32)
}

