///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class InputRestrictionEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputRestrictionEntityData"); }
		virtual ~InputRestrictionEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		InputRestrictionEntityData() {
			m_overridePreviousInputRestriction = true;
			m_applyRestrictionsToSpecificPlayer = false;
			m_throttle = true;
			m_strafe = true;
			m_brake = true;
			m_handBrake = true;
			m_clutch = true;
			m_yaw = true;
			m_pitch = true;
			m_roll = true;
			m_fire = true;
			m_fireCountermeasure = true;
			m_altFire = true;
			m_cycleRadioChannel = true;
			m_selectMeleeWeapon = true;
			m_zoom = true;
			m_jump = true;
			m_changeVehicle = true;
			m_changeEntry = true;
			m_changePose = true;
			m_toggleParachute = true;
			m_changeWeapon = true;
			m_reload = true;
			m_toggleCamera = true;
			m_sprint = true;
			m_scoreboardMenu = true;
			m_mapZoom = true;
			m_gearUp = true;
			m_gearDown = true;
			m_threeDimensionalMap = true;
			m_giveOrder = true;
			m_prone = true;
			m_switchPrimaryInventory = true;
			m_switchPrimaryWeapon = true;
			m_grenadeLauncher = true;
			m_staticGadget = true;
			m_dynamicGadget1 = true;
			m_dynamicGadget2 = true;
			m_dynamicGadget3 = true;
			m_dynamicGadget4 = true;
			m_meleeAttack = true;
			m_throwGrenade = true;
			m_selectWeapon1 = true;
			m_selectWeapon2 = true;
			m_selectWeapon3 = true;
			m_selectWeapon4 = true;
			m_selectWeapon5 = true;
			m_selectWeapon6 = true;
			m_selectWeapon7 = true;
			m_selectWeapon8 = true;
			m_selectWeapon9 = true;
			m_commoRose = true;
			m_toggleLight = true;
			m_cycleFireMode = true;
		};

		bool m_overridePreviousInputRestriction; // 0x18 (24)
		bool m_applyRestrictionsToSpecificPlayer; // 0x19 (25)
		bool m_throttle; // 0x1A (26)
		bool m_strafe; // 0x1B (27)
		bool m_brake; // 0x1C (28)
		bool m_handBrake; // 0x1D (29)
		bool m_clutch; // 0x1E (30)
		bool m_yaw; // 0x1F (31)
		bool m_pitch; // 0x20 (32)
		bool m_roll; // 0x21 (33)
		bool m_fire; // 0x22 (34)
		bool m_fireCountermeasure; // 0x23 (35)
		bool m_altFire; // 0x24 (36)
		bool m_cycleRadioChannel; // 0x25 (37)
		bool m_selectMeleeWeapon; // 0x26 (38)
		bool m_zoom; // 0x27 (39)
		bool m_jump; // 0x28 (40)
		bool m_changeVehicle; // 0x29 (41)
		bool m_changeEntry; // 0x2A (42)
		bool m_changePose; // 0x2B (43)
		bool m_toggleParachute; // 0x2C (44)
		bool m_changeWeapon; // 0x2D (45)
		bool m_reload; // 0x2E (46)
		bool m_toggleCamera; // 0x2F (47)
		bool m_sprint; // 0x30 (48)
		bool m_scoreboardMenu; // 0x31 (49)
		bool m_mapZoom; // 0x32 (50)
		bool m_gearUp; // 0x33 (51)
		bool m_gearDown; // 0x34 (52)
		bool m_threeDimensionalMap; // 0x35 (53)
		bool m_giveOrder; // 0x36 (54)
		bool m_prone; // 0x37 (55)
		bool m_switchPrimaryInventory; // 0x38 (56)
		bool m_switchPrimaryWeapon; // 0x39 (57)
		bool m_grenadeLauncher; // 0x3A (58)
		bool m_staticGadget; // 0x3B (59)
		bool m_dynamicGadget1; // 0x3C (60)
		bool m_dynamicGadget2; // 0x3D (61)
		bool m_dynamicGadget3; // 0x3E (62)
		bool m_dynamicGadget4; // 0x3F (63)
		bool m_meleeAttack; // 0x40 (64)
		bool m_throwGrenade; // 0x41 (65)
		bool m_selectWeapon1; // 0x42 (66)
		bool m_selectWeapon2; // 0x43 (67)
		bool m_selectWeapon3; // 0x44 (68)
		bool m_selectWeapon4; // 0x45 (69)
		bool m_selectWeapon5; // 0x46 (70)
		bool m_selectWeapon6; // 0x47 (71)
		bool m_selectWeapon7; // 0x48 (72)
		bool m_selectWeapon8; // 0x49 (73)
		bool m_selectWeapon9; // 0x4A (74)
		bool m_commoRose; // 0x4B (75)
		bool m_toggleLight; // 0x4C (76)
		bool m_cycleFireMode; // 0x4D (77)
	}; // 0x50 (80)
}

