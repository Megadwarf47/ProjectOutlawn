///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Animated1pOnlyWeaponBinding.h>
#include <fb/Animated3pOnlyWeaponBinding.h>
#include <fb/AnimatedWeaponBinding.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class PickupEntityAsset;
	class SkeletonAsset;
	class SoldierAimingSimulationData;
}

namespace fb {
	class SoldierWeaponsComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponsComponentData"); }
		virtual ~SoldierWeaponsComponentData() override {}
		SoldierWeaponsComponentData() {
			m_primaryWeaponId = 0;
			m_ammoClipIncreaseMultiplier = 1.f;
			m_grenadeIncrease = 0;
			m_underslungGrenadeIncrease = 0;
			m_explosiveIncreaseMultiplier = 1.f;
			m_useExternalAimDir = false;
			m_unlimitedAmmo = false;
			m_unlimitedMags = false;
			m_isOwnedByAI = false;
		};

		LinearTransform m_aimDir; // 0x70 (112)
		s32 m_primaryWeaponId; // 0xB0 (176)
		CtrRef<SoldierAimingSimulationData> m_defaultAimingController; // 0xB8 (184)
		AnimatedWeaponBinding m_animatedWeaponBinding; // 0xC0 (192)
		Animated1pOnlyWeaponBinding m_animated1pOnlyWeaponBinding; // 0x64C (1612)
		Animated3pOnlyWeaponBinding m_animated3pOnlyWeaponBinding; // 0x69C (1692)
		CtrRef<SkeletonAsset> m_weaponSkeleton; // 0x6D8 (1752)
		float m_ammoClipIncreaseMultiplier; // 0x6E0 (1760)
		s32 m_grenadeIncrease; // 0x6E4 (1764)
		s32 m_underslungGrenadeIncrease; // 0x6E8 (1768)
		float m_explosiveIncreaseMultiplier; // 0x6EC (1772)
		CtrRef<PickupEntityAsset> m_dropWeaponPickup; // 0x6F0 (1776)
		bool m_useExternalAimDir; // 0x6F8 (1784)
		bool m_unlimitedAmmo; // 0x6F9 (1785)
		bool m_unlimitedMags; // 0x6FA (1786)
		bool m_isOwnedByAI; // 0x6FB (1787)
	}; // 0x700 (1792)
}

