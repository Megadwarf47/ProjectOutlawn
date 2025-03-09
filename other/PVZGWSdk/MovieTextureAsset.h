///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class MovieTextureAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovieTextureAsset"); }
		virtual ~MovieTextureAsset() override {}
		MovieTextureAsset() {
			m_chunkSize = 0;
			m_subtitleChunkSize = 0;
			m_hasLocalizedAudioTracks = false;
			m_overrideBackgroundMusic = false;
		};

		Guid m_chunkGuid; // 0x18 (24)
		u32 m_chunkSize; // 0x28 (40)
		Guid m_subtitleChunkGuid; // 0x2C (44)
		u32 m_subtitleChunkSize; // 0x3C (60)
		bool m_hasLocalizedAudioTracks; // 0x40 (64)
		bool m_overrideBackgroundMusic; // 0x41 (65)
	}; // 0x48 (72)
}

