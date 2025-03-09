///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class UICustomizationCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizationCompData"); }
		virtual ~UICustomizationCompData() override {}
		UICustomizationCompData() {
			m_weaponScreenWidthPercent = 0.8f;
			m_soldierOffset = Vec3(0.f, -0.5f, -3.f);
			m_vehicleOffset = Vec3(0.f, -1.5f, -10.f);
			m_weaponRotationLerpSpeed = 10.f;
			m_weaponRotationSpeed = 3.f;
			m_gamepadZoomSpeed = 1.f;
			m_mouseZoomSpeed = 0.1f;
			m_mouseRotationSpeed = 0.002f;
			m_weaponStartRotY = 0.f;
			m_weaponStartRotZ = 0.f;
			m_weaponMaxAngleY = 60.f;
			m_weaponMinAngleY = -60.f;
			m_weaponMaxAngleZ = 45.f;
			m_rotAroundCameraY = -8.5f;
			m_weaponAccessoryPivotLerpSpeed = 15.f;
			m_soldierRotationSpeed = 1.f;
			m_vehicleRotationSpeed = 1.f;
			m_networkThrottleTimer = 1.f;
		};

		float m_weaponScreenWidthPercent; // 0x30 (48)
		Vec3 m_soldierOffset; // 0x40 (64)
		Vec3 m_vehicleOffset; // 0x50 (80)
		Vec3 m_soldierRotation; // 0x60 (96)
		Vec3 m_vehicleRotation; // 0x70 (112)
		float m_weaponRotationLerpSpeed; // 0x80 (128)
		float m_weaponRotationSpeed; // 0x84 (132)
		float m_gamepadZoomSpeed; // 0x88 (136)
		float m_mouseZoomSpeed; // 0x8C (140)
		float m_mouseRotationSpeed; // 0x90 (144)
		float m_weaponStartRotY; // 0x94 (148)
		float m_weaponStartRotZ; // 0x98 (152)
		float m_weaponMaxAngleY; // 0x9C (156)
		float m_weaponMinAngleY; // 0xA0 (160)
		float m_weaponMaxAngleZ; // 0xA4 (164)
		float m_rotAroundCameraY; // 0xA8 (168)
		float m_weaponAccessoryPivotLerpSpeed; // 0xAC (172)
		float m_soldierRotationSpeed; // 0xB0 (176)
		float m_vehicleRotationSpeed; // 0xB4 (180)
		float m_networkThrottleTimer; // 0xB8 (184)
	}; // 0xC0 (192)
}

