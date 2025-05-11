///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AmmoConfigData.h>
#include <fb/Array.h>
#include <fb/ChargeShotConfigData.h>
#include <fb/CtrRef.h>
#include <fb/FireEffectData.h>
#include <fb/FireLogicData.h>
#include <fb/FiringDispersionData.h>
#include <fb/GameDataContainer.h>
#include <fb/GameplayBones.h>
#include <fb/OverHeatData.h>
#include <fb/ShotConfigData.h>
#include <fb/WeaponDispersion.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class FiringFunctionData : public GameDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FiringFunctionData"); }
		virtual ~FiringFunctionData() override {}
		FiringFunctionData() {
			m_chargingEffectDelay = 0.f;
			m_selfHealTimeWhenDeployed = 0.f;
			m_projectileSpawnBone = GameplayBones::GameplayBones_AimBone;
			m_projectileSpawnBoneAlt = GameplayBones::GameplayBones_UndefinedBone;
			m_projectileGraphicEffectsSpawnBone = GameplayBones::GameplayBones_AimBone;
			m_projectileGraphicEffectsSpawnBone_Alt = GameplayBones::GameplayBones_UndefinedBone;
			m_usePrimaryAmmo = true;
			m_unlimitedAmmoForAI = false;
		};

		Array<FiringDispersionData> m_dispersion; // 0x10 (16)
		WeaponDispersion m_weaponDispersion; // 0x18 (24)
		Array<FireEffectData> m_fireEffects1p; // 0x78 (120)
		Array<FireEffectData> m_fireEffects3p; // 0x80 (128)
		ShotConfigData m_shot; // 0x90 (144)
		OverHeatData m_overHeat; // 0x120 (288)
		CtrRef<SoundAsset> m_sound; // 0x190 (400)
		CtrRef<SoundAsset> m_sound1p; // 0x198 (408)
		FireLogicData m_fireLogic; // 0x1A0 (416)
		AmmoConfigData m_ammo; // 0x260 (608)
		Array<ChargeShotConfigData> m_chargeShots; // 0x288 (648)
		float m_chargingEffectDelay; // 0x290 (656)
		float m_selfHealTimeWhenDeployed; // 0x294 (660)
		GameplayBones m_projectileSpawnBone; // 0x298 (664)
		GameplayBones m_projectileSpawnBoneAlt; // 0x29C (668)
		GameplayBones m_projectileGraphicEffectsSpawnBone; // 0x2A0 (672)
		GameplayBones m_projectileGraphicEffectsSpawnBone_Alt; // 0x2A4 (676)
		bool m_usePrimaryAmmo; // 0x2A8 (680)
		bool m_unlimitedAmmoForAI; // 0x2A9 (681)
	}; // 0x2B0 (688)
}

