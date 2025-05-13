///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class CrosshairTypeAsset;
	class LockingTypeAsset;
	class UIPartPropertyList;
}

namespace fb {
	struct HudData {
		HudData() {
			m_crosshairScaleMin = 0.f;
			m_crosshairScaleMax = 5.f;
			m_crosshairOpacityMin = 1.f;
			m_crosshairOpacityMax = 0.1f;
			m_crosshairOpacityModifier = 1.f;
			m_lowAmmoWarning = 0.3f;
			m_reloadPrompt = 0.3f;
			m_renderTargetIndex = 0;
			m_seaLevelAltFreq = 0.f;
			m_cameraShakeModifier = 1.f;
			m_showMinimap = true;
			m_hideAmmo = false;
			m_infiniteAmmo = false;
			m_hideCrosshairWhenAimOnFriend = true;
			m_useRenderTarget = false;
			m_useRangeMeter = false;
			m_useAimWarning = false;
			m_usePredictedSight = false;
			m_useWeaponOrientations = false;
			m_useVelocityVectorMarker = false;
			m_useLockingController = false;
			m_useThrust = false;
			m_useGForce = false;
			m_useSkidSlip = false;
			m_useClimbRate = false;
		};

		float m_crosshairScaleMin; // 0x0 (0)
		float m_crosshairScaleMax; // 0x4 (4)
		float m_crosshairOpacityMin; // 0x8 (8)
		float m_crosshairOpacityMax; // 0xC (12)
		float m_crosshairOpacityModifier; // 0x10 (16)
		String m_crosshairTypeId; // 0x18 (24)
		CtrRef<CrosshairTypeAsset> m_crosshairType; // 0x20 (32)
		CtrRef<LockingTypeAsset> m_lockingType; // 0x28 (40)
		String m_weaponClass; // 0x30 (48)
		float m_lowAmmoWarning; // 0x38 (56)
		float m_reloadPrompt; // 0x3C (60)
		s32 m_renderTargetIndex; // 0x40 (64)
		CtrRef<UIPartPropertyList> m_hudPropertyList; // 0x48 (72)
		float m_seaLevelAltFreq; // 0x50 (80)
		float m_cameraShakeModifier; // 0x54 (84)
		String m_hudIcon; // 0x58 (88)
		bool m_showMinimap; // 0x60 (96)
		bool m_hideAmmo; // 0x61 (97)
		bool m_infiniteAmmo; // 0x62 (98)
		bool m_hideCrosshairWhenAimOnFriend; // 0x63 (99)
		bool m_useRenderTarget; // 0x64 (100)
		bool m_useRangeMeter; // 0x65 (101)
		bool m_useAimWarning; // 0x66 (102)
		bool m_usePredictedSight; // 0x67 (103)
		bool m_useWeaponOrientations; // 0x68 (104)
		bool m_useVelocityVectorMarker; // 0x69 (105)
		bool m_useLockingController; // 0x6A (106)
		bool m_useThrust; // 0x6B (107)
		bool m_useGForce; // 0x6C (108)
		bool m_useSkidSlip; // 0x6D (109)
		bool m_useClimbRate; // 0x6E (110)
	}; // 0x70 (112)
}

