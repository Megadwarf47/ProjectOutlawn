///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GunSwayDispersionModData.h>
#include <fb/Types.h>

namespace fb {
	struct GunSwayStanceZoomModifierData {
		GunSwayStanceZoomModifierData() {
			m_recoilMagnitudeMod = 1.f;
			m_recoilAngleMod = 1.f;
			m_firstShotRecoilMod = 1.f;
			m_lagYawMod = 0.f;
			m_lagPitchMod = 0.f;
		};

		GunSwayDispersionModData m_dispersionMod; // 0x0 (0)
		GunSwayDispersionModData m_movingDispersionMod; // 0x10 (16)
		GunSwayDispersionModData m_sprintingDispersionMod; // 0x20 (32)
		float m_recoilMagnitudeMod; // 0x30 (48)
		float m_recoilAngleMod; // 0x34 (52)
		float m_firstShotRecoilMod; // 0x38 (56)
		float m_lagYawMod; // 0x3C (60)
		float m_lagPitchMod; // 0x40 (64)
	}; // 0x44 (68)
}

