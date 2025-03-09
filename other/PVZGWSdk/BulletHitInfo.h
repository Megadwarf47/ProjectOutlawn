///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntHitReactionWeaponType.h>
#include <fb/CtrRef.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	class UnlockAssetBase;
}

namespace fb {
	struct BulletHitInfo {
		BulletHitInfo() {
			m_damage = 0.f;
			m_weaponType = AntHitReactionWeaponType::AntHitReactionWeaponType_Pistol;
			m_boneType = 0;
			m_shooterPlayerId = 0;
			m_shooterIsAIPlayer = false;
		};

		Vec3 m_direction; // 0x0 (0)
		Vec3 m_spawnPosition; // 0x10 (16)
		Vec3 m_hitPosition; // 0x20 (32)
		float m_damage; // 0x30 (48)
		CtrRef<UnlockAssetBase> m_weaponUnlockAsset; // 0x38 (56)
		AntHitReactionWeaponType m_weaponType; // 0x40 (64)
		s32 m_boneType; // 0x44 (68)
		s32 m_shooterPlayerId; // 0x48 (72)
		bool m_shooterIsAIPlayer; // 0x4C (76)
	}; // 0x50 (80)
}

