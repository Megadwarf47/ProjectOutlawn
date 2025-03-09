///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	struct Minimap2DTile {
		Minimap2DTile() {
			m_childIndex0 = -1;
			m_childIndex1 = -1;
			m_childIndex2 = -1;
			m_childIndex3 = -1;
		};

		CtrRef<TextureAsset> m_texture; // 0x0 (0)
		s32 m_childIndex0; // 0x8 (8)
		s32 m_childIndex1; // 0xC (12)
		s32 m_childIndex2; // 0x10 (16)
		s32 m_childIndex3; // 0x14 (20)
	}; // 0x18 (24)
}

