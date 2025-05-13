///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>

namespace fb {
	class UICustomize3DModelEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomize3DModelEntityData"); }
		virtual ~UICustomize3DModelEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		UICustomize3DModelEntityData() {
			m_realm = Realm::Realm_Client;
			m_soldierOffset = Vec3(0.f, -0.5f, -3.f);
			m_vehicleOffset = Vec3(0.f, -1.5f, -10.f);
			m_weaponScreenWidthPercent = 0.8f;
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
			m_currentState = 0;
			m_currentTab = 0;
			m_currentSlot = 0;
			m_nextState = 0;
			m_nextTab = 0;
			m_nextSlot = 0;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_soldierOffset; // 0x20 (32)
		Vec3 m_vehicleOffset; // 0x30 (48)
		Vec3 m_soldierRotation; // 0x40 (64)
		Vec3 m_vehicleRotation; // 0x50 (80)
		float m_weaponScreenWidthPercent; // 0x60 (96)
		float m_weaponRotationLerpSpeed; // 0x64 (100)
		float m_weaponRotationSpeed; // 0x68 (104)
		float m_gamepadZoomSpeed; // 0x6C (108)
		float m_mouseZoomSpeed; // 0x70 (112)
		float m_mouseRotationSpeed; // 0x74 (116)
		float m_weaponStartRotY; // 0x78 (120)
		float m_weaponStartRotZ; // 0x7C (124)
		float m_weaponMaxAngleY; // 0x80 (128)
		float m_weaponMinAngleY; // 0x84 (132)
		float m_weaponMaxAngleZ; // 0x88 (136)
		float m_rotAroundCameraY; // 0x8C (140)
		float m_weaponAccessoryPivotLerpSpeed; // 0x90 (144)
		float m_soldierRotationSpeed; // 0x94 (148)
		float m_vehicleRotationSpeed; // 0x98 (152)
		float m_networkThrottleTimer; // 0x9C (156)
		s32 m_currentState; // 0xA0 (160)
		s32 m_currentTab; // 0xA4 (164)
		s32 m_currentSlot; // 0xA8 (168)
		s32 m_nextState; // 0xAC (172)
		s32 m_nextTab; // 0xB0 (176)
		s32 m_nextSlot; // 0xB4 (180)
	}; // 0xC0 (192)
}

