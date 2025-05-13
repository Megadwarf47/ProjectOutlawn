///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameModeVariation.h>
#include <fb/String.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UIGameModeDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGameModeDescription"); }
		virtual ~UIGameModeDescription() override {}
		UIGameModeDescription() {
			m_battlelogId = 0;
			m_excludeFromBrowser = false;
		};

		String m_identifier; // 0x28 (40)
		String m_name; // 0x30 (48)
		String m_abbreviation; // 0x38 (56)
		String m_desc; // 0x40 (64)
		String m_hint; // 0x48 (72)
		s32 m_battlelogId; // 0x50 (80)
		String m_texturePath; // 0x58 (88)
		Array<GameModeVariation> m_variations; // 0x60 (96)
		bool m_excludeFromBrowser; // 0x68 (104)
	}; // 0x70 (112)
}

