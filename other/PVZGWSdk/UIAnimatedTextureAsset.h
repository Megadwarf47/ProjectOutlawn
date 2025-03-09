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
#include <fb/UITextureAtlasInfo.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class UIAnimatedTextureAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAnimatedTextureAsset"); }
		virtual ~UIAnimatedTextureAsset() override {}
		UIAnimatedTextureAsset() {
			m_frameRate = 30.f;
		};

		float m_frameRate; // 0x18 (24)
		CtrRef<TextureAsset> m_textureAtlas; // 0x20 (32)
		Array<UITextureAtlasInfo> m_textureInfos; // 0x28 (40)
	}; // 0x30 (48)
}

