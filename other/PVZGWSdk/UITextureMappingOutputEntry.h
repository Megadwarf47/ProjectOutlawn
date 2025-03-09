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
#include <fb/Vec2.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	struct UITextureMappingOutputEntry {
		UITextureMappingOutputEntry() {
			m_streaming = false;
		};

		String m_id; // 0x0 (0)
		CtrRef<TextureAsset> m_texture; // 0x8 (8)
		Vec2 m_min; // 0x10 (16)
		Vec2 m_max; // 0x18 (24)
		bool m_streaming; // 0x20 (32)
	}; // 0x28 (40)
}

