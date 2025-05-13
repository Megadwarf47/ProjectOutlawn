///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BoltActionData.h>
#include <fb/FireLogicType.h>
#include <fb/HoldAndReleaseData.h>
#include <fb/RecoilData.h>
#include <fb/ReloadLogic.h>
#include <fb/ReloadType.h>
#include <fb/Types.h>

namespace fb {
	struct FireLogicData {
		FireLogicData() {
			m_fireInputAction = 1018135856;
			m_reloadInputAction = 1131457753;
			m_cycleFireModeInputAction = -1145593149;
			m_triggerPullWeight = 0.1f;
			m_rateOfFire = 550.f;
			m_rateOfFireForBurst = 550.f;
			m_clientFireRateMultiplier = 0.67f;
			m_reloadDelay = 0.f;
			m_reloadTime = 3.6f;
			m_firstReloadTimeOverride = 0.f;
			m_reloadTimeBulletsLeft = -1.f;
			m_reloadThreshold = 0.75f;
			m_preFireDelay = 0.f;
			m_automaticDelay = 0.f;
			m_reloadLogic = ReloadLogic::rlWeaponSwitchCancelsUnfinishedReload;
			m_reloadType = ReloadType::rtMagazine;
			m_fireLogicType = FireLogicType::fltAutomaticFire;
			m_automaticFirePrimingTime = 0.f;
			m_primingFireInputAction = 1018302687;
			m_holdOffReloadUntilFireRelease = false;
			m_holdOffReloadUntilZoomRelease = false;
			m_forceReloadActionOnFireTrigger = false;
			m_alwaysAutoReload = true;
		};

		HoldAndReleaseData m_holdAndRelease; // 0x0 (0)
		BoltActionData m_boltAction; // 0x20 (32)
		RecoilData m_recoil; // 0x30 (48)
		s32 m_fireInputAction; // 0x58 (88)
		s32 m_reloadInputAction; // 0x5C (92)
		s32 m_cycleFireModeInputAction; // 0x60 (96)
		float m_triggerPullWeight; // 0x64 (100)
		float m_rateOfFire; // 0x68 (104)
		float m_rateOfFireForBurst; // 0x6C (108)
		float m_clientFireRateMultiplier; // 0x70 (112)
		float m_reloadDelay; // 0x74 (116)
		float m_reloadTime; // 0x78 (120)
		float m_firstReloadTimeOverride; // 0x7C (124)
		Array<float> m_reloadTimerArray; // 0x80 (128)
		float m_reloadTimeBulletsLeft; // 0x88 (136)
		float m_reloadThreshold; // 0x8C (140)
		float m_preFireDelay; // 0x90 (144)
		float m_automaticDelay; // 0x94 (148)
		ReloadLogic m_reloadLogic; // 0x98 (152)
		ReloadType m_reloadType; // 0x9C (156)
		FireLogicType m_fireLogicType; // 0xA0 (160)
		Array<FireLogicType> m_fireLogicTypeArray; // 0xA8 (168)
		float m_automaticFirePrimingTime; // 0xB0 (176)
		s32 m_primingFireInputAction; // 0xB4 (180)
		bool m_holdOffReloadUntilFireRelease; // 0xB8 (184)
		bool m_holdOffReloadUntilZoomRelease; // 0xB9 (185)
		bool m_forceReloadActionOnFireTrigger; // 0xBA (186)
		bool m_alwaysAutoReload; // 0xBB (187)
	}; // 0xC0 (192)
}

