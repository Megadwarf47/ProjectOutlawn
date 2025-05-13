///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct DecalAtlasTile {
		DecalAtlasTile() {
			m_tileIndexX = 0.f;
			m_tileIndexY = 0.f;
			m_tileCountX = 1.f;
			m_tileCountY = 1.f;
			m_flipX = false;
			m_flipY = false;
		};

		float m_tileIndexX; // 0x0 (0)
		float m_tileIndexY; // 0x4 (4)
		float m_tileCountX; // 0x8 (8)
		float m_tileCountY; // 0xC (12)
		bool m_flipX; // 0x10 (16)
		bool m_flipY; // 0x11 (17)
	}; // 0x14 (20)
}

