///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RarenessLevel.h>
#include <fb/String.h>
#include <fb/UIHudIcon.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UISoldierAppearanceDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISoldierAppearanceDescription"); }
		virtual ~UISoldierAppearanceDescription() override {}
		UISoldierAppearanceDescription() {
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
			m_hudIcon = UIHudIcon::UIHudIcon_Unused;
			m_hiddenInProgression = false;
			m_notExplicitelySelectable = false;
		};

		String m_name; // 0x28 (40)
		String m_unlockName; // 0x30 (48)
		RarenessLevel m_rarenessLevel; // 0x38 (56)
		String m_description; // 0x40 (64)
		String m_category; // 0x48 (72)
		String m_texturePath; // 0x50 (80)
		String m_iconTexturePath; // 0x58 (88)
		String m_unlockTexturePath; // 0x60 (96)
		UIHudIcon m_hudIcon; // 0x68 (104)
		bool m_hiddenInProgression; // 0x6C (108)
		bool m_notExplicitelySelectable; // 0x6D (109)
	}; // 0x70 (112)
}

