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
	struct PVZUIStickerBookWeapon {
		PVZUIStickerBookWeapon() {
			m_unlockAssetIdentifier = 0;
		};

		u32 m_unlockAssetIdentifier; // 0x0 (0)
		CtrRef<TextureAsset> m_image; // 0x8 (8)
		String m_ammoDescription; // 0x10 (16)
		String m_reloadDescription; // 0x18 (24)
		String m_damageDescription; // 0x20 (32)
		String m_useDescription; // 0x28 (40)
	}; // 0x30 (48)
}

