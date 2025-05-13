///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct HoldAndReleaseData {
		HoldAndReleaseData() {
			m_maxHoldTime = 10.f;
			m_minPowerModifier = 1.f;
			m_maxPowerModifier = 2.f;
			m_powerIncreasePerSecond = 0.1f;
			m_delay = 0.f;
			m_killedHoldingPowerModifier = 0.f;
			m_chargeDelay = 0.f;
			m_forceFireWhenKilledHolding = true;
		};

		float m_maxHoldTime; // 0x0 (0)
		float m_minPowerModifier; // 0x4 (4)
		float m_maxPowerModifier; // 0x8 (8)
		float m_powerIncreasePerSecond; // 0xC (12)
		float m_delay; // 0x10 (16)
		float m_killedHoldingPowerModifier; // 0x14 (20)
		float m_chargeDelay; // 0x18 (24)
		bool m_forceFireWhenKilledHolding; // 0x1C (28)
	}; // 0x20 (32)
}

