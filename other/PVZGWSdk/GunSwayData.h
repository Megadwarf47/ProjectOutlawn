///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GunSwayCrouchProneData.h>
#include <fb/GunSwayModifierUnlock.h>
#include <fb/GunSwayStanceTransition.h>
#include <fb/GunSwayStanceZoomModifierData.h>
#include <fb/GunSwayStandData.h>
#include <fb/WeaponSwayData.h>

namespace fb {
	class CameraRecoilData;
}

namespace fb {
	class GunSwayData : public WeaponSwayData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GunSwayData"); }
		virtual ~GunSwayData() override {}
		GunSwayData() {
			m_deviationScaleFactorZoom = 1.f;
			m_gameplayDeviationScaleFactorZoom = 1.f;
			m_deviationScaleFactorNoZoom = 1.f;
			m_gameplayDeviationScaleFactorNoZoom = 1.f;
			m_shootingRecoilDecreaseScale = 0.1f;
			m_firstShotRecoilMultiplier = 1.f;
		};

		GunSwayStandData m_stand; // 0x10 (16)
		GunSwayCrouchProneData m_crouch; // 0x128 (296)
		GunSwayCrouchProneData m_prone; // 0x1C0 (448)
		GunSwayStanceTransition m_proneToCrouch; // 0x258 (600)
		GunSwayStanceTransition m_proneToStand; // 0x26C (620)
		GunSwayStanceTransition m_crouchToProne; // 0x280 (640)
		GunSwayStanceTransition m_crouchToStand; // 0x294 (660)
		GunSwayStanceTransition m_standToProne; // 0x2A8 (680)
		GunSwayStanceTransition m_standToCrouch; // 0x2BC (700)
		GunSwayStanceZoomModifierData m_suppressionModifierUnzoomed; // 0x2D0 (720)
		GunSwayStanceZoomModifierData m_suppressionModifierZoomed; // 0x314 (788)
		Array<GunSwayModifierUnlock> m_modifierUnlocks; // 0x358 (856)
		float m_deviationScaleFactorZoom; // 0x360 (864)
		float m_gameplayDeviationScaleFactorZoom; // 0x364 (868)
		float m_deviationScaleFactorNoZoom; // 0x368 (872)
		float m_gameplayDeviationScaleFactorNoZoom; // 0x36C (876)
		float m_shootingRecoilDecreaseScale; // 0x370 (880)
		float m_firstShotRecoilMultiplier; // 0x374 (884)
		CtrRef<CameraRecoilData> m_cameraRecoil; // 0x378 (888)
	}; // 0x380 (896)
}

