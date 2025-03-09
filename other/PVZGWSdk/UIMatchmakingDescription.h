///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UIMatchmakingDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMatchmakingDescription"); }
		virtual ~UIMatchmakingDescription() override {}
		UIMatchmakingDescription() {
		};

		String m_identifier; // 0x28 (40)
		String m_header; // 0x30 (48)
		String m_description; // 0x38 (56)
		String m_mapsDescription; // 0x40 (64)
		Array<String> m_gameModes; // 0x48 (72)
		Array<String> m_levelPaths; // 0x50 (80)
		String m_experience; // 0x58 (88)
		String m_videoThumbnailPath; // 0x60 (96)
	}; // 0x68 (104)
}

