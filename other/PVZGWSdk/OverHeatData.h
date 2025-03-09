///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/FireEffectData.h>
#include <fb/Types.h>

namespace fb {
	struct OverHeatData {
		OverHeatData() {
			m_heatPerBullet = 0.f;
			m_heatDropPerSecond = 0.2f;
			m_overHeatPenaltyTime = 3.f;
			m_overHeatThreshold = 0.8f;
		};

		FireEffectData m_overHeatEffect; // 0x0 (0)
		float m_heatPerBullet; // 0x60 (96)
		float m_heatDropPerSecond; // 0x64 (100)
		float m_overHeatPenaltyTime; // 0x68 (104)
		float m_overHeatThreshold; // 0x6C (108)
	}; // 0x70 (112)
}

