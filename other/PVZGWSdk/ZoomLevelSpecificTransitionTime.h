///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct ZoomLevelSpecificTransitionTime {
		ZoomLevelSpecificTransitionTime() {
			m_fromZoomLevel = 0;
			m_toZoomLevel = 0;
			m_zoomTransitionTime = 0.f;
			m_fovTransitionTime = 0.f;
		};

		s32 m_fromZoomLevel; // 0x0 (0)
		s32 m_toZoomLevel; // 0x4 (4)
		float m_zoomTransitionTime; // 0x8 (8)
		float m_fovTransitionTime; // 0xC (12)
	}; // 0x10 (16)
}

