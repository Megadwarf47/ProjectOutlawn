///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BoneComponentData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Vec3.h>
#include <fb/WeaponClassification.h>

namespace fb {
	class GameAIWeaponData;
	class MeshAsset;
	class WeaponData;
	class WeaponFiringData;
	class WeaponUnlockAsset;
}

namespace fb {
	class WeaponComponentData : public BoneComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponComponentData"); }
		virtual ~WeaponComponentData() override {}
		WeaponComponentData() {
			m_impulseStrength = 0.f;
			m_classification = WeaponClassification::WCNone;
			m_reloadTimeMultiplier = 1.f;
			m_damageMultiplier = 1.f;
			m_explosionDamageMultiplier = 1.f;
			m_overheatDropPerSecondMultiplier = 1.f;
			m_lockTimeMultiplier = 1.f;
			m_lockingAcceptanceAngleMultiplier = 1.f;
			m_weaponItemHash = 0;
			m_sequentialFiring = true;
			m_activate3pTargeting = false;
		};

		Vec3 m_projectileSpawnOffset; // 0x70 (112)
		Vec3 m_targetPositionOverride; // 0x80 (128)
		CtrRef<MeshAsset> m_weaponMesh; // 0x90 (144)
		CtrRef<WeaponFiringData> m_weaponFiring; // 0x98 (152)
		CtrRef<WeaponUnlockAsset> m_weaponUnlockAsset; // 0xA0 (160)
		String m_damageGiverName; // 0xA8 (168)
		CtrRef<GameAIWeaponData> m_aiData; // 0xB0 (176)
		CtrRef<WeaponData> m_customWeaponType; // 0xB8 (184)
		float m_impulseStrength; // 0xC0 (192)
		WeaponClassification m_classification; // 0xC4 (196)
		float m_reloadTimeMultiplier; // 0xC8 (200)
		float m_damageMultiplier; // 0xCC (204)
		float m_explosionDamageMultiplier; // 0xD0 (208)
		float m_overheatDropPerSecondMultiplier; // 0xD4 (212)
		float m_lockTimeMultiplier; // 0xD8 (216)
		float m_lockingAcceptanceAngleMultiplier; // 0xDC (220)
		u32 m_weaponItemHash; // 0xE0 (224)
		bool m_sequentialFiring; // 0xE4 (228)
		bool m_activate3pTargeting; // 0xE5 (229)
	}; // 0xF0 (240)
}

