///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/WarnTarget.h>

namespace fb {
	struct LockingAndHomingData {
		LockingAndHomingData() {
			m_warnLock = WarnTarget::wtWarnNone;
			m_isHoming = true;
			m_isGuided = false;
			m_isGuidedWhenZoomed = false;
			m_isGuidedHoming = false;
			m_fireOnlyWhenLockedOn = false;
		};

		WarnTarget m_warnLock; // 0x0 (0)
		bool m_isHoming; // 0x4 (4)
		bool m_isGuided; // 0x5 (5)
		bool m_isGuidedWhenZoomed; // 0x6 (6)
		bool m_isGuidedHoming; // 0x7 (7)
		bool m_fireOnlyWhenLockedOn; // 0x8 (8)
	}; // 0xC (12)
}

