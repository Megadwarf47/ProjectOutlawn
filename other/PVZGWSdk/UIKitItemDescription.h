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
	class UIKitItemDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIKitItemDescription"); }
		virtual ~UIKitItemDescription() override {}
		UIKitItemDescription() {
			m_hudIcon = UIHudIcon::UIHudIcon_Unused;
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
			m_hiddenInProgression = false;
			m_notExplicitelySelectable = false;
		};

		String m_name; // 0x28 (40)
		String m_unlockName; // 0x30 (48)
		String m_description; // 0x38 (56)
		String m_category; // 0x40 (64)
		String m_texturePath; // 0x48 (72)
		String m_iconTexturePath; // 0x50 (80)
		String m_unlockTexturePath; // 0x58 (88)
		UIHudIcon m_hudIcon; // 0x60 (96)
		RarenessLevel m_rarenessLevel; // 0x64 (100)
		bool m_hiddenInProgression; // 0x68 (104)
		bool m_notExplicitelySelectable; // 0x69 (105)
	}; // 0x70 (112)
}

