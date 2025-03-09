///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterPoseAction.h>
#include <fb/CtrRef.h>
#include <fb/TriggerEntityData.h>

namespace fb {
	class SoldierWeaponUnlockAsset;
}

namespace fb {
	class CharacterStateTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterStateTriggerEntityData"); }
		virtual ~CharacterStateTriggerEntityData() override {}
		CharacterStateTriggerEntityData() {
			m_pitch = 0.f;
			m_characterPose = CharacterPoseAction::CPTForceToStand;
			m_seatIndex = 0;
			m_healthToSet = 100;
			m_healthToCheck = 100;
			m_ammoToSet = 75;
			m_poseToCheck = CharacterPoseAction::CPTForceToStand;
			m_activeWeaponSlot = 0;
			m_moveSpeedMultiplier = 1.f;
			m_sprintSpeedMultiplier = 1.f;
			m_jumpHeightMultiplier = 1.f;
			m_lookSpeedMultiplier = 1.f;
			m_usePitch = false;
			m_excludeConnectedVehicles = false;
			m_stayInVehicleOnMove = false;
			m_leaveVehicleOnMove = true;
			m_checkAllWeapons = false;
			m_checkOnlyReadyWeapons = false;
			m_continueToCheckIfHoldingWrongWeapon = false;
			m_shouldCheckSeatIndex = false;
			m_allowRemoteControlledVehicles = false;
			m_checkHealthGreaterOrEqual = true;
			m_useExitPointWhenLeavingVehicle = true;
			m_disablePhysicsWhenLeavingVehicle = false;
			m_leaveRemoteVehicles = false;

			m_runOnce = false;
		};

		float m_pitch; // 0x70 (112)
		CharacterPoseAction m_characterPose; // 0x74 (116)
		CtrRef<SoldierWeaponUnlockAsset> m_soldierWeapon; // 0x78 (120)
		u32 m_seatIndex; // 0x80 (128)
		u32 m_healthToSet; // 0x84 (132)
		u32 m_healthToCheck; // 0x88 (136)
		u32 m_ammoToSet; // 0x8C (140)
		CharacterPoseAction m_poseToCheck; // 0x90 (144)
		u32 m_activeWeaponSlot; // 0x94 (148)
		float m_moveSpeedMultiplier; // 0x98 (152)
		float m_sprintSpeedMultiplier; // 0x9C (156)
		float m_jumpHeightMultiplier; // 0xA0 (160)
		float m_lookSpeedMultiplier; // 0xA4 (164)
		bool m_usePitch; // 0xA8 (168)
		bool m_excludeConnectedVehicles; // 0xA9 (169)
		bool m_stayInVehicleOnMove; // 0xAA (170)
		bool m_leaveVehicleOnMove; // 0xAB (171)
		bool m_checkAllWeapons; // 0xAC (172)
		bool m_checkOnlyReadyWeapons; // 0xAD (173)
		bool m_continueToCheckIfHoldingWrongWeapon; // 0xAE (174)
		bool m_shouldCheckSeatIndex; // 0xAF (175)
		bool m_allowRemoteControlledVehicles; // 0xB0 (176)
		bool m_checkHealthGreaterOrEqual; // 0xB1 (177)
		bool m_useExitPointWhenLeavingVehicle; // 0xB2 (178)
		bool m_disablePhysicsWhenLeavingVehicle; // 0xB3 (179)
		bool m_leaveRemoteVehicles; // 0xB4 (180)
	}; // 0xC0 (192)
}

