///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RarenessLevel.h>
#include <fb/String.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UIWeaponDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWeaponDescription"); }
		virtual ~UIWeaponDescription() override {}
		UIWeaponDescription() {
			m_statDamage = 0.f;
			m_statAccuracy = 0.f;
			m_statMobility = 0.f;
			m_statRange = 0.f;
			m_statHandling = 0.f;
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
			m_hasTutorial = false;
			m_isHiddenWhenLocked = false;
			m_fireModeSingle = false;
			m_fireModeBurst = false;
			m_fireModeAuto = false;
			m_hiddenInProgression = false;
		};

		String m_name; // 0x28 (40)
		String m_namePlural; // 0x30 (48)
		String m_unlockName; // 0x38 (56)
		String m_description; // 0x40 (64)
		String m_category; // 0x48 (72)
		String m_texturePath; // 0x50 (80)
		String m_iconTexturePath; // 0x58 (88)
		String m_iconId; // 0x60 (96)
		String m_unlockTexturePath; // 0x68 (104)
		String m_ammo; // 0x70 (112)
		String m_rateOfFire; // 0x78 (120)
		String m_ammoType; // 0x80 (128)
		String m_range; // 0x88 (136)
		float m_statDamage; // 0x90 (144)
		float m_statAccuracy; // 0x94 (148)
		float m_statMobility; // 0x98 (152)
		float m_statRange; // 0x9C (156)
		float m_statHandling; // 0xA0 (160)
		RarenessLevel m_rarenessLevel; // 0xA4 (164)
		bool m_hasTutorial; // 0xA8 (168)
		bool m_isHiddenWhenLocked; // 0xA9 (169)
		bool m_fireModeSingle; // 0xAA (170)
		bool m_fireModeBurst; // 0xAB (171)
		bool m_fireModeAuto; // 0xAC (172)
		bool m_hiddenInProgression; // 0xAD (173)
	}; // 0xB0 (176)
}

