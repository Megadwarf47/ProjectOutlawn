///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/LockingAndHomingData.h>
#include <fb/ZoomLevelLockData.h>

namespace fb {
	class LockingControllerData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LockingControllerData"); }
		virtual ~LockingControllerData() override {}
		LockingControllerData() {
			m_lockTime = 3.f;
			m_unLockTime = -1.f;
			m_releaseTime = 5.f;
			m_releaseOnNewTargetTime = 1.f;
			m_sampleRate = 0.1f;
			m_holdStillThreshold = 10.f;
			m_checkVisibilityLength = 1000.f;
			m_rayLength = 1000.f;
			m_acceptanceAngle = 0.f;
			m_angleConstant = 50.f;
			m_distanceConstant = 50.f;
			m_sensitivity = 0.f;
			m_minimumLockTime = 0.f;
			m_lockOnVisibleTargetsOnly = false;
			m_requireAmmoToLock = false;
			m_positionOnly = false;
			m_lockOnWorldSpacePos = false;
			m_lockOnEmptyVehicles = true;
			m_lockOnCharacters = false;
			m_ignoreHeigthLockDistance = false;
			m_lockInCombatAreaOnly = false;
		};

		Array<ZoomLevelLockData> m_zoomLevelLock; // 0x10 (16)
		float m_lockTime; // 0x18 (24)
		float m_unLockTime; // 0x1C (28)
		float m_releaseTime; // 0x20 (32)
		float m_releaseOnNewTargetTime; // 0x24 (36)
		float m_sampleRate; // 0x28 (40)
		float m_holdStillThreshold; // 0x2C (44)
		float m_checkVisibilityLength; // 0x30 (48)
		float m_rayLength; // 0x34 (52)
		float m_acceptanceAngle; // 0x38 (56)
		float m_angleConstant; // 0x3C (60)
		float m_distanceConstant; // 0x40 (64)
		float m_sensitivity; // 0x44 (68)
		float m_minimumLockTime; // 0x48 (72)
		LockingAndHomingData m_lockingWeaponData; // 0x4C (76)
		bool m_lockOnVisibleTargetsOnly; // 0x58 (88)
		bool m_requireAmmoToLock; // 0x59 (89)
		bool m_positionOnly; // 0x5A (90)
		bool m_lockOnWorldSpacePos; // 0x5B (91)
		bool m_lockOnEmptyVehicles; // 0x5C (92)
		bool m_lockOnCharacters; // 0x5D (93)
		bool m_ignoreHeigthLockDistance; // 0x5E (94)
		bool m_lockInCombatAreaOnly; // 0x5F (95)
	}; // 0x60 (96)
}

