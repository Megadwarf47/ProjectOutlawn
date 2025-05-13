///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UIVehicleUnlockDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIVehicleUnlockDescription"); }
		virtual ~UIVehicleUnlockDescription() override {}
		UIVehicleUnlockDescription() {
			m_hiddenInProgression = false;
			m_notExplicitelySelectable = false;
		};

		String m_name; // 0x28 (40)
		String m_description; // 0x30 (48)
		String m_category; // 0x38 (56)
		String m_texturePath; // 0x40 (64)
		String m_iconTexturePath; // 0x48 (72)
		String m_unlockTexturePath; // 0x50 (80)
		bool m_hiddenInProgression; // 0x58 (88)
		bool m_notExplicitelySelectable; // 0x59 (89)
	}; // 0x60 (96)
}

