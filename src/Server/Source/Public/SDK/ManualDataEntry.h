///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GamePlatform.h>
#include <fb/LanguageFormat.h>
#include <fb/RefArray.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	struct ManualDataEntry {
		ManualDataEntry() {
			m_platform = GamePlatform::GamePlatform_Ps3;
			m_language = LanguageFormat::LanguageFormat_English;
		};

		GamePlatform m_platform; // 0x0 (0)
		LanguageFormat m_language; // 0x4 (4)
		RefArray<TextureAsset> m_textures; // 0x8 (8)
	}; // 0x10 (16)
}

