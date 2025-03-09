///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class TextureSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextureSettings"); }
		virtual ~TextureSettings() override {}
		TextureSettings() {
			m_skipMipmapCount = 0;
			m_loadingEnabled = true;
			m_renderTexturesEnabled = true;
		};

		u32 m_skipMipmapCount; // 0x10 (16)
		bool m_loadingEnabled; // 0x14 (20)
		bool m_renderTexturesEnabled; // 0x15 (21)
	}; // 0x18 (24)
}

