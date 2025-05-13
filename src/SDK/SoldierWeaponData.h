///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/CustomizationAccessoryPivots.h>
#include <fb/HudData.h>
#include <fb/PickupSettingsData.h>
#include <fb/QuickThrowTypeEnum.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/Vec3.h>
#include <fb/WeaponAnimBaseSetEnum.h>
#include <fb/WeaponEntityData.h>
#include <fb/WeaponModifierData.h>

namespace fb {
	class EntityVoiceOverInfo;
	class FirstPersonCameraData;
	class SocketData;
	class SoldierAimingSimulationData;
	class SoldierWeaponBlueprint;
	class WeaponZoomLevelData;
}

namespace fb {
	class SoldierWeaponData : public WeaponEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponData"); }
		virtual ~SoldierWeaponData() override {}
		virtual bool getIsEntityOwner() const override { return true; }
		SoldierWeaponData() {
			m_interactionOffset = Vec3(0.f, 0.f, 0.45f);
			m_animBaseSet = WeaponAnimBaseSetEnum::wabsRif;
			m_fireAndSwitchBackDelay = 0.f;
			m_quickThrowType = QuickThrowTypeEnum::QttHand;
			m_secondaryActionInputAction = -1341426433;
			m_weaponFloatParam = 1.f;
			m_maxRangeMeterDistance = 200.f;
			m_forceQuickSwitch = false;
			m_forceTriggerReleaseOnUnDeploy = false;
			m_hideWhenOutOfAmmo = false;
			m_allowSwitchingToWeaponOutOfAmmo = true;
			m_allowSwitchingToWeaponReloading = true;
			m_switchToPrimaryWhenOutOfAmmo = true;
			m_waitForFireBeforeSwitchToPrimaryWhenOutOfAmmo = true;
			m_fireAndSwitchBackToPrevSupported = false;
			m_allowSwitchingToWeaponInVehicles = true;
			m_allowSwitchingToWeaponInWater = false;
			m_lowerOnOwnTeam = true;
			m_redeployWhenSwitchingWeaponStates = true;
			m_useQuickThrowOnAutomaticSwitchback = false;
			m_enableBreathControl = false;
			m_canBeInSupportedShooting = false;
			m_useDetailedRangeMeterQuery = false;
			m_isSilenced = false;
			m_isRenderedBySubclass = false;
		};

		PickupSettingsData m_pickupSettings; // 0xB0 (176)
		Vec3 m_interactionOffset; // 0xD0 (208)
		CustomizationAccessoryPivots m_customizationAccessoryPivots; // 0xE0 (224)
		String m_damageGiverName; // 0x130 (304)
		RefArray<WeaponZoomLevelData> m_zoomLevels; // 0x138 (312)
		Array<WeaponModifierData> m_weaponModifierData; // 0x140 (320)
		CtrRef<SoldierAimingSimulationData> m_aimingController; // 0x148 (328)
		CtrRef<FirstPersonCameraData> m_firstPersonCamera; // 0x150 (336)
		HudData m_hud; // 0x158 (344)
		WeaponAnimBaseSetEnum m_animBaseSet; // 0x1C8 (456)
		float m_fireAndSwitchBackDelay; // 0x1CC (460)
		QuickThrowTypeEnum m_quickThrowType; // 0x1D0 (464)
		CtrRef<SoldierWeaponBlueprint> m_soldierWeaponBlueprint; // 0x1D8 (472)
		String m_persistenceId; // 0x1E0 (480)
		s32 m_secondaryActionInputAction; // 0x1E8 (488)
		CtrRef<EntityVoiceOverInfo> m_voiceOverInfo; // 0x1F0 (496)
		float m_weaponFloatParam; // 0x1F8 (504)
		float m_maxRangeMeterDistance; // 0x1FC (508)
		RefArray<SocketData> m_socketsInWeapon; // 0x200 (512)
		bool m_forceQuickSwitch; // 0x208 (520)
		bool m_forceTriggerReleaseOnUnDeploy; // 0x209 (521)
		bool m_hideWhenOutOfAmmo; // 0x20A (522)
		bool m_allowSwitchingToWeaponOutOfAmmo; // 0x20B (523)
		bool m_allowSwitchingToWeaponReloading; // 0x20C (524)
		bool m_switchToPrimaryWhenOutOfAmmo; // 0x20D (525)
		bool m_waitForFireBeforeSwitchToPrimaryWhenOutOfAmmo; // 0x20E (526)
		bool m_fireAndSwitchBackToPrevSupported; // 0x20F (527)
		bool m_allowSwitchingToWeaponInVehicles; // 0x210 (528)
		bool m_allowSwitchingToWeaponInWater; // 0x211 (529)
		bool m_lowerOnOwnTeam; // 0x212 (530)
		bool m_redeployWhenSwitchingWeaponStates; // 0x213 (531)
		bool m_useQuickThrowOnAutomaticSwitchback; // 0x214 (532)
		bool m_enableBreathControl; // 0x215 (533)
		bool m_canBeInSupportedShooting; // 0x216 (534)
		bool m_useDetailedRangeMeterQuery; // 0x217 (535)
		bool m_isSilenced; // 0x218 (536)
		bool m_isRenderedBySubclass; // 0x219 (537)
	}; // 0x220 (544)
}

