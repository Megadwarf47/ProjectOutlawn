///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/TextureCompressQualityMode.h>

namespace fb {
	class TextureCompressSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextureCompressSettings"); }
		virtual ~TextureCompressSettings() override {}
		TextureCompressSettings() {
			m_viewMode = TextureCompressQualityMode::TextureCompressQualityMode_Default;
			m_textureCompressJobPoolSize = 8;
			m_debugDrawAlphaOverlayScale = 32.f;
			m_debugDrawEnable = false;
		};

		TextureCompressQualityMode m_viewMode; // 0x10 (16)
		u32 m_textureCompressJobPoolSize; // 0x14 (20)
		float m_debugDrawAlphaOverlayScale; // 0x18 (24)
		bool m_debugDrawEnable; // 0x1C (28)
	}; // 0x20 (32)
}

