///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterSoundData.h>
#include <fb/CtrRef.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class SoldierSoundData : public CharacterSoundData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierSoundData"); }
		virtual ~SoldierSoundData() override {}
		SoldierSoundData() {
			m_sprintTimeForRecovery = 5.f;
			m_movementThreshold = 0.1f;
			m_minHealSoundTime = 0.5f;
		};

		CtrRef<SoundAsset> m_death; // 0x18 (24)
		CtrRef<SoundAsset> m_bulletImpact; // 0x20 (32)
		CtrRef<SoundAsset> m_explosionImpact; // 0x28 (40)
		CtrRef<SoundAsset> m_smackableImpact; // 0x30 (48)
		CtrRef<SoundAsset> m_healing; // 0x38 (56)
		CtrRef<SoundAsset> m_breathControl; // 0x40 (64)
		CtrRef<SoundAsset> m_hitIndicator; // 0x48 (72)
		CtrRef<SoundAsset> m_pickupKit; // 0x50 (80)
		CtrRef<SoundAsset> m_pickupAmmo; // 0x58 (88)
		float m_sprintTimeForRecovery; // 0x60 (96)
		float m_movementThreshold; // 0x64 (100)
		float m_minHealSoundTime; // 0x68 (104)
	}; // 0x70 (112)
}

