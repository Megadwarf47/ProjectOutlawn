///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIMinimapIconTexture.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class UIMinimapIconTextureAtlasAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapIconTextureAtlasAsset"); }
		virtual ~UIMinimapIconTextureAtlasAsset() override {}
		UIMinimapIconTextureAtlasAsset() {
			m_onDemandEnable = false;
		};

		Array<UIMinimapIconTexture> m_icons; // 0x18 (24)
		CtrRef<TextureAsset> m_textureAtlas; // 0x20 (32)
		String m_jsonData; // 0x28 (40)
		bool m_onDemandEnable; // 0x30 (48)
	}; // 0x38 (56)
}

