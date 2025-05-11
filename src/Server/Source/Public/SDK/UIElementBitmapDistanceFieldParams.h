///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/UIElementColor.h>

namespace fb {
	struct UIElementBitmapDistanceFieldParams {
		UIElementBitmapDistanceFieldParams() {
			m_alphaThreshold = 0.496f;
			m_distanceScale = 5.f;
			m_outlineInner = 0.f;
			m_outlineOuter = 0.f;
		};

		UIElementColor m_outlineColor; // 0x0 (0)
		float m_alphaThreshold; // 0x20 (32)
		float m_distanceScale; // 0x24 (36)
		float m_outlineInner; // 0x28 (40)
		float m_outlineOuter; // 0x2C (44)
	}; // 0x30 (48)
}

