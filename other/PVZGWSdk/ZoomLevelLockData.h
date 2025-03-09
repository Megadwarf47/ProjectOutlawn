///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LockType.h>
#include <fb/Types.h>

namespace fb {
	struct ZoomLevelLockData {
		ZoomLevelLockData() {
			m_outlineTaggedDistance = 0.f;
			m_lockType = LockType::LockAlways;
		};

		float m_outlineTaggedDistance; // 0x0 (0)
		LockType m_lockType; // 0x4 (4)
	}; // 0x8 (8)
}

