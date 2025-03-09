///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/ZoomLevelActivateEventType.h>

namespace fb {
	class FOVTransitionData;
}

namespace fb {
	class ZoomLevelData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ZoomLevelData"); }
		virtual ~ZoomLevelData() override {}
		ZoomLevelData() {
			m_fieldOfView = 55.f;
			m_fieldOfViewSP = -1.f;
			m_lookSpeedMultiplier = 1.f;
			m_sprintLookSpeedMultiplier = 0.5f;
			m_moveSpeedMultiplier = 1.f;
			m_swayPitchMagnitude = 0.f;
			m_swayYawMagnitude = 0.f;
			m_supportedSwayPitchMagnitude = 0.f;
			m_supportedSwayYawMagnitude = 0.f;
			m_suppressedSwayPitchMagnitude = 0.f;
			m_suppressedSwayYawMagnitude = 0.f;
			m_suppressedSwayMinFactor = 0.5f;
			m_timePitchMultiplier = 0.1f;
			m_timeYawMultiplier = 0.03f;
			m_dispersionMultiplier = 1.f;
			m_dispersionRotation = 0.f;
			m_recoilMultiplier = 1.f;
			m_recoilFovMultiplier = 1.f;
			m_cameraImpulseMultiplier = 1.f;
			m_startFadeToBlackAtTime = 0.1f;
			m_fadeToBlackDuration = 0.2f;
			m_startFadeFromBlackAtTime = 0.3f;
			m_fadeFromBlackDuration = 0.1f;
			m_screenExposureAreaScale = 1.f;
			m_onActivateEventType = ZoomLevelActivateEventType::ZoomLevelActivateEventType_Disable;
			m_attractYawStrength = 1.f;
			m_attractPitchStrength = 1.f;
			m_dofMaxBlurDelta = 0.f;
			m_dofFarStartDelta = 0.f;
			m_allowFieldOfViewScaling = false;
			m_fadeToBlackInZoomTransition = false;
			m_useFovSpecialisation = false;
			m_useWeaponMeshZoom1p = true;
		};

		float m_fieldOfView; // 0x10 (16)
		float m_fieldOfViewSP; // 0x14 (20)
		CtrRef<FOVTransitionData> m_fieldOfViewTransition; // 0x18 (24)
		float m_lookSpeedMultiplier; // 0x20 (32)
		float m_sprintLookSpeedMultiplier; // 0x24 (36)
		float m_moveSpeedMultiplier; // 0x28 (40)
		float m_swayPitchMagnitude; // 0x2C (44)
		float m_swayYawMagnitude; // 0x30 (48)
		float m_supportedSwayPitchMagnitude; // 0x34 (52)
		float m_supportedSwayYawMagnitude; // 0x38 (56)
		float m_suppressedSwayPitchMagnitude; // 0x3C (60)
		float m_suppressedSwayYawMagnitude; // 0x40 (64)
		float m_suppressedSwayMinFactor; // 0x44 (68)
		float m_timePitchMultiplier; // 0x48 (72)
		float m_timeYawMultiplier; // 0x4C (76)
		float m_dispersionMultiplier; // 0x50 (80)
		float m_dispersionRotation; // 0x54 (84)
		float m_recoilMultiplier; // 0x58 (88)
		float m_recoilFovMultiplier; // 0x5C (92)
		float m_cameraImpulseMultiplier; // 0x60 (96)
		float m_startFadeToBlackAtTime; // 0x64 (100)
		float m_fadeToBlackDuration; // 0x68 (104)
		float m_startFadeFromBlackAtTime; // 0x6C (108)
		float m_fadeFromBlackDuration; // 0x70 (112)
		float m_screenExposureAreaScale; // 0x74 (116)
		ZoomLevelActivateEventType m_onActivateEventType; // 0x78 (120)
		float m_attractYawStrength; // 0x7C (124)
		float m_attractPitchStrength; // 0x80 (128)
		float m_dofMaxBlurDelta; // 0x84 (132)
		float m_dofFarStartDelta; // 0x88 (136)
		bool m_allowFieldOfViewScaling; // 0x8C (140)
		bool m_fadeToBlackInZoomTransition; // 0x8D (141)
		bool m_useFovSpecialisation; // 0x8E (142)
		bool m_useWeaponMeshZoom1p; // 0x8F (143)
	}; // 0x90 (144)
}

