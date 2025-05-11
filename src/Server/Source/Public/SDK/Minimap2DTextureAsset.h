///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/Minimap2DTile.h>

namespace fb {
	class Minimap2DTextureAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Minimap2DTextureAsset"); }
		virtual ~Minimap2DTextureAsset() override {}
		Minimap2DTextureAsset() {
			m_imageDataURLChunkSize = 0;
			m_rootTileIndex = -1;
			m_outputSize = 0;
			m_textureTileSize = 0;
			m_lowestTileResolution = 0;
			m_skipMips = 0;
			m_lowDetailSkipMips = 0;
			m_useMipMappedStaticTile = false;
			m_hasDetailVolumes = true;
		};

		Array<Minimap2DTile> m_tiles; // 0x18 (24)
		Guid m_imageDataURLChunk; // 0x20 (32)
		u32 m_imageDataURLChunkSize; // 0x30 (48)
		s32 m_rootTileIndex; // 0x34 (52)
		u32 m_outputSize; // 0x38 (56)
		u32 m_textureTileSize; // 0x3C (60)
		u32 m_lowestTileResolution; // 0x40 (64)
		u32 m_skipMips; // 0x44 (68)
		u32 m_lowDetailSkipMips; // 0x48 (72)
		bool m_useMipMappedStaticTile; // 0x4C (76)
		bool m_hasDetailVolumes; // 0x4D (77)
	}; // 0x50 (80)
}

