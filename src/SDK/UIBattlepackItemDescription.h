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
	class UIBattlepackItemDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattlepackItemDescription"); }
		virtual ~UIBattlepackItemDescription() override {}
		UIBattlepackItemDescription() {
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
		};

		String m_name; // 0x28 (40)
		String m_description; // 0x30 (48)
		String m_category; // 0x38 (56)
		String m_texturePath; // 0x40 (64)
		RarenessLevel m_rarenessLevel; // 0x48 (72)
	}; // 0x50 (80)
}

