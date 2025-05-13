///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct ScreenshotInfo {
		ScreenshotInfo() {
			m_cropImageX1 = 0;
			m_cropImageX2 = 0;
			m_cropImageY1 = 0;
			m_cropImageY2 = 0;
			m_resizeOutputImageWidth = 0;
			m_resizeOutputImageHeight = 0;
			m_cropImage = false;
			m_resizeOutputImage = false;
		};

		String m_name; // 0x0 (0)
		u32 m_cropImageX1; // 0x8 (8)
		u32 m_cropImageX2; // 0xC (12)
		u32 m_cropImageY1; // 0x10 (16)
		u32 m_cropImageY2; // 0x14 (20)
		u32 m_resizeOutputImageWidth; // 0x18 (24)
		u32 m_resizeOutputImageHeight; // 0x1C (28)
		bool m_cropImage; // 0x20 (32)
		bool m_resizeOutputImage; // 0x21 (33)
	}; // 0x28 (40)
}

