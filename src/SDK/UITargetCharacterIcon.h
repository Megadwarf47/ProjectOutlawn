///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/TargetCharacterIconType.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	struct UITargetCharacterIcon {
		UITargetCharacterIcon() {
			m_iconType = TargetCharacterIconType::TargetCharacterIconType_None;
		};

		TargetCharacterIconType m_iconType; // 0x0 (0)
		CtrRef<TextureAsset> m_texture; // 0x8 (8)
	}; // 0x10 (16)
}

