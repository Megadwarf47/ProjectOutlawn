///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct BoltActionData {
		BoltActionData() {
			m_boltActionDelay = 0.5f;
			m_boltActionTime = 1.f;
			m_holdBoltActionUntilFireRelease = true;
			m_holdBoltActionUntilZoomRelease = true;
			m_forceBoltActionOnFireTrigger = false;
			m_unZoomOnBoltAction = true;
			m_returnToZoomAfterBoltAction = true;
		};

		float m_boltActionDelay; // 0x0 (0)
		float m_boltActionTime; // 0x4 (4)
		bool m_holdBoltActionUntilFireRelease; // 0x8 (8)
		bool m_holdBoltActionUntilZoomRelease; // 0x9 (9)
		bool m_forceBoltActionOnFireTrigger; // 0xA (10)
		bool m_unZoomOnBoltAction; // 0xB (11)
		bool m_returnToZoomAfterBoltAction; // 0xC (12)
	}; // 0x10 (16)
}

