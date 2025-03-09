///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class TextureAssetUnlockPartData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextureAssetUnlockPartData"); }
		virtual ~TextureAssetUnlockPartData() override {}
		TextureAssetUnlockPartData() {
		};

		CtrRef<TextureAsset> m_texture; // 0x10 (16)
	}; // 0x18 (24)
}

