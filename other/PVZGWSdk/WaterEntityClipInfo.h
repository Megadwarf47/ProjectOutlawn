///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct WaterEntityClipInfo {
		WaterEntityClipInfo() {
			m_enable = false;
			m_clipFaceNorth = false;
			m_clipFaceSouth = false;
			m_clipFaceEast = false;
			m_clipFaceWest = false;
		};

		bool m_enable; // 0x0 (0)
		bool m_clipFaceNorth; // 0x1 (1)
		bool m_clipFaceSouth; // 0x2 (2)
		bool m_clipFaceEast; // 0x3 (3)
		bool m_clipFaceWest; // 0x4 (4)
	}; // 0x5 (5)
}

