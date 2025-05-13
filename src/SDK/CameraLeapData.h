///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LinearTransform.h>
#include <fb/Types.h>

namespace fb {
	struct CameraLeapData {
		CameraLeapData() {
			m_time = 0.f;
			m_fovModifier = 1.f;
		};

		LinearTransform m_transform; // 0x0 (0)
		float m_time; // 0x40 (64)
		float m_fovModifier; // 0x44 (68)
	}; // 0x50 (80)
}

