///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	struct UITextureMapping {
		UITextureMapping() {
		};

		String m_id; // 0x0 (0)
		CtrRef<TextureAsset> m_texture; // 0x8 (8)
	}; // 0x10 (16)
}

