///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct WeaponMiscModifierSettings {
		WeaponMiscModifierSettings() {
			m_enableBreathControl = false;
			m_canBeInSupportedShooting = false;
			m_unZoomOnBoltAction = true;
			m_holdBoltActionUntilZoomRelease = true;
			m_isSilenced = false;
		};

		bool m_enableBreathControl; // 0x0 (0)
		bool m_canBeInSupportedShooting; // 0x1 (1)
		bool m_unZoomOnBoltAction; // 0x2 (2)
		bool m_holdBoltActionUntilZoomRelease; // 0x3 (3)
		bool m_isSilenced; // 0x4 (4)
	}; // 0x5 (5)
}

