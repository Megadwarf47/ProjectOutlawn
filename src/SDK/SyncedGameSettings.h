///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class SyncedGameSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SyncedGameSettings"); }
		virtual ~SyncedGameSettings() override {}
		SyncedGameSettings() {
			m_difficultyIndex = 0;
			m_manDownTimeModifier = 1.f;
			m_bulletDamageModifier = 1.f;
			m_maxAllowedLatency = 0.85f;
			m_disableToggleEntryCamera = false;
			m_disableRegenerateHealth = false;
			m_enableFriendlyFire = false;
			m_allowClientSideDamageArbitration = true;
			m_serverSideAIDamage = false;
			m_forceReloadWholeMags = false;
		};

		u32 m_difficultyIndex; // 0x20 (32)
		float m_manDownTimeModifier; // 0x24 (36)
		float m_bulletDamageModifier; // 0x28 (40)
		float m_maxAllowedLatency; // 0x2C (44)
		bool m_disableToggleEntryCamera; // 0x30 (48)
		bool m_disableRegenerateHealth; // 0x31 (49)
		bool m_enableFriendlyFire; // 0x32 (50)
		bool m_allowClientSideDamageArbitration; // 0x33 (51)
		bool m_serverSideAIDamage; // 0x34 (52)
		bool m_forceReloadWholeMags; // 0x35 (53)
	}; // 0x38 (56)
}

