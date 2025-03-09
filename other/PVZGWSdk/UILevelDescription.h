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
	class UILevelDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UILevelDescription"); }
		virtual ~UILevelDescription() override {}
		UILevelDescription() {
		};

		String m_levelName; // 0x28 (40)
		String m_texturePath; // 0x30 (48)
		String m_thumbnailTexturePath; // 0x38 (56)
		String m_miniatureTexturePath; // 0x40 (64)
		String m_levelTextureName; // 0x48 (72)
	}; // 0x50 (80)
}

