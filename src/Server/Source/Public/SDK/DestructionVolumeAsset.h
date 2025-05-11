///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class DestructionVolumeAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionVolumeAsset"); }
		virtual ~DestructionVolumeAsset() override {}
		DestructionVolumeAsset() {
			m_atlasTextureScale = 0.5f;
		};

		CtrRef<TextureAsset> m_diffuseAtlas; // 0x18 (24)
		CtrRef<TextureAsset> m_normalmapAtlas; // 0x20 (32)
		float m_atlasTextureScale; // 0x28 (40)
	}; // 0x30 (48)
}

