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
#include <fb/UIAxesButtonTexture.h>
#include <fb/UIKeysButtonTexture.h>
#include <fb/UIMouseButtonTexture.h>
#include <fb/UIPadButtonTexture.h>
#include <fb/UITextureAtlasInfo.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class UIButtonsTextureAtlasAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIButtonsTextureAtlasAsset"); }
		virtual ~UIButtonsTextureAtlasAsset() override {}
		UIButtonsTextureAtlasAsset() {
			m_onDemandEnable = false;
		};

		Array<UIAxesButtonTexture> m_axesTextures; // 0x18 (24)
		Array<UIPadButtonTexture> m_padTextures; // 0x20 (32)
		Array<UIKeysButtonTexture> m_keysTextures; // 0x28 (40)
		Array<UIMouseButtonTexture> m_mouseTextures; // 0x30 (48)
		UITextureAtlasInfo m_echapKeyTexture; // 0x38 (56)
		UITextureAtlasInfo m_espaceKeyTexture; // 0x48 (72)
		UITextureAtlasInfo m_finKeyTexture; // 0x58 (88)
		UITextureAtlasInfo m_origineKeyTexture; // 0x68 (104)
		UITextureAtlasInfo m_verrNumKeyTexture; // 0x78 (120)
		UITextureAtlasInfo m_pageSuivKeyTexture; // 0x88 (136)
		UITextureAtlasInfo m_pagePrecKeyTexture; // 0x98 (152)
		CtrRef<TextureAsset> m_textureAtlas; // 0xA8 (168)
		bool m_onDemandEnable; // 0xB0 (176)
	}; // 0xB8 (184)
}

