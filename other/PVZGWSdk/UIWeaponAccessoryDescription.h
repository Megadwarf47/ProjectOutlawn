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
	class UIWeaponAccessoryDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWeaponAccessoryDescription"); }
		virtual ~UIWeaponAccessoryDescription() override {}
		UIWeaponAccessoryDescription() {
			m_weaponId = 0;
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
			m_statDamage = 1.f;
			m_statAccuracy = 1.f;
			m_statMobility = 1.f;
			m_statRange = 1.f;
			m_statHandling = 1.f;
			m_coreAccessory = false;
			m_hiddenInProgression = false;
		};

		String m_name; // 0x28 (40)
		String m_description; // 0x30 (48)
		String m_category; // 0x38 (56)
		u32 m_weaponId; // 0x40 (64)
		String m_texturePath; // 0x48 (72)
		String m_iconTexturePath; // 0x50 (80)
		String m_unlockTexturePath; // 0x58 (88)
		RarenessLevel m_rarenessLevel; // 0x60 (96)
		float m_statDamage; // 0x64 (100)
		float m_statAccuracy; // 0x68 (104)
		float m_statMobility; // 0x6C (108)
		float m_statRange; // 0x70 (112)
		float m_statHandling; // 0x74 (116)
		bool m_coreAccessory; // 0x78 (120)
		bool m_hiddenInProgression; // 0x79 (121)
	}; // 0x80 (128)
}

