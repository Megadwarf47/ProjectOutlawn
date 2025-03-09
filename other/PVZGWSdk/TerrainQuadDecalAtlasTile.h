///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct TerrainQuadDecalAtlasTile {
		TerrainQuadDecalAtlasTile() {
			m_tileIndexX = 0;
			m_tileIndexY = 0;
			m_tileCountX = 1;
			m_tileCountY = 1;
			m_flipX = false;
			m_flipY = false;
		};

		u32 m_tileIndexX; // 0x0 (0)
		u32 m_tileIndexY; // 0x4 (4)
		u32 m_tileCountX; // 0x8 (8)
		u32 m_tileCountY; // 0xC (12)
		bool m_flipX; // 0x10 (16)
		bool m_flipY; // 0x11 (17)
	}; // 0x14 (20)
}

