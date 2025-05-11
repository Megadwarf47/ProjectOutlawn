///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameDataContainer.h>
#include <fb/RumbleFiringData.h>

namespace fb {
	class FiringFunctionData;
	class WeaponSwayData;
}

namespace fb {
	class WeaponFiringData : public GameDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponFiringData"); }
		virtual ~WeaponFiringData() override {}
		WeaponFiringData() {
			m_deployTime = 2.f;
			m_reactivateCooldownTime = 0.f;
			m_disableZoomOnDeployTime = 0.25f;
			m_altDeployTime = 2.f;
			m_altDeployId = -1;
			m_supportDelayStand = 0.3f;
			m_supportDelayProne = 0.3f;
			m_useAutoAiming = true;
			m_inflictSelfDamage = false;
			m_showEnemyNametagOnAim = true;
			m_reloadWholeMags = false;
			m_disableReloadWhileSprinting = false;
			m_abortReloadOnSprint = false;
		};

		CtrRef<FiringFunctionData> m_primaryFire; // 0x10 (16)
		float m_deployTime; // 0x18 (24)
		float m_reactivateCooldownTime; // 0x1C (28)
		float m_disableZoomOnDeployTime; // 0x20 (32)
		float m_altDeployTime; // 0x24 (36)
		s32 m_altDeployId; // 0x28 (40)
		CtrRef<WeaponSwayData> m_weaponSway; // 0x30 (48)
		RumbleFiringData m_rumble; // 0x38 (56)
		float m_supportDelayStand; // 0x44 (68)
		float m_supportDelayProne; // 0x48 (72)
		bool m_useAutoAiming; // 0x4C (76)
		bool m_inflictSelfDamage; // 0x4D (77)
		bool m_showEnemyNametagOnAim; // 0x4E (78)
		bool m_reloadWholeMags; // 0x4F (79)
		bool m_disableReloadWhileSprinting; // 0x50 (80)
		bool m_abortReloadOnSprint; // 0x51 (81)
	}; // 0x58 (88)
}

