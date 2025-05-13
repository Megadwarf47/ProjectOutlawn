///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	struct PVZUIStickerBookSummon {
		PVZUIStickerBookSummon() {
			m_stickerNumber = 0;
			m_summonBoostAssetIdentifier = 0;
		};

		s32 m_stickerNumber; // 0x0 (0)
		u32 m_summonBoostAssetIdentifier; // 0x4 (4)
		String m_summonBoostAssetKey; // 0x8 (8)
		CtrRef<TextureAsset> m_image; // 0x10 (16)
	}; // 0x18 (24)
}

