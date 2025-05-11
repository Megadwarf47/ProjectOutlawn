///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponData.h>

namespace fb {
	class PvZArtilleryStrikeWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PvZArtilleryStrikeWeaponData"); }
		virtual ~PvZArtilleryStrikeWeaponData() override {}
		PvZArtilleryStrikeWeaponData() {
			m_maxStrikeDistance = 300.f;
			m_leadShotDamageMultiplier = 0.2f;
			m_strikeRadius = 10.f;
			m_strikeDelay = 2.f;
			m_spawnHeight = 350.f;
			m_spawnDelay = 1.f;
			m_useLeadingShot = true;
			m_enableProjectileTrails = true;
			m_useAITarget = false;
			m_forceSecondaryShot = false;
		};

		float m_maxStrikeDistance; // 0x20 (32)
		float m_leadShotDamageMultiplier; // 0x24 (36)
		float m_strikeRadius; // 0x28 (40)
		float m_strikeDelay; // 0x2C (44)
		float m_spawnHeight; // 0x30 (48)
		float m_spawnDelay; // 0x34 (52)
		bool m_useLeadingShot; // 0x38 (56)
		bool m_enableProjectileTrails; // 0x39 (57)
		bool m_useAITarget; // 0x3A (58)
		bool m_forceSecondaryShot; // 0x3B (59)
	}; // 0x40 (64)
}

