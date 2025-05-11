///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct GunSwayRecoilData {
		GunSwayRecoilData() {
			m_recoilAmplitudeMax = 10.f;
			m_recoilAmplitudeIncPerShot = 2.f;
			m_horizontalRecoilAmplitudeIncPerShotMin = -1.f;
			m_horizontalRecoilAmplitudeIncPerShotMax = 1.f;
			m_horizontalRecoilAmplitudeMax = 10.f;
			m_recoilAmplitudeDecreaseFactor = 4.f;
		};

		float m_recoilAmplitudeMax; // 0x0 (0)
		float m_recoilAmplitudeIncPerShot; // 0x4 (4)
		float m_horizontalRecoilAmplitudeIncPerShotMin; // 0x8 (8)
		float m_horizontalRecoilAmplitudeIncPerShotMax; // 0xC (12)
		float m_horizontalRecoilAmplitudeMax; // 0x10 (16)
		float m_recoilAmplitudeDecreaseFactor; // 0x14 (20)
	}; // 0x18 (24)
}

