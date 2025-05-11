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
	class UIBattlepackDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattlepackDescription"); }
		virtual ~UIBattlepackDescription() override {}
		UIBattlepackDescription() {
			m_audioLevel = 0;

			m_ignoreBuild = true;
		};

		String m_label; // 0x28 (40)
		String m_description; // 0x30 (48)
		String m_imageName; // 0x38 (56)
		String m_openImageName; // 0x40 (64)
		String m_lineartImageName; // 0x48 (72)
		String m_lineartOpenImageName; // 0x50 (80)
		s32 m_audioLevel; // 0x58 (88)
	}; // 0x60 (96)
}

