///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>
#include <fb/Vec4.h>

namespace fb {
	class UIDistanceFieldAsset;
}

namespace fb {
	struct UIMinimapDistanceFieldParams {
		UIMinimapDistanceFieldParams() {
			m_colorTint = Vec4(1.f, 1.f, 1.f, 1.f);
			m_outlineColor = Vec4(1.f, 1.f, 1.f, 1.f);
			m_alphaThreshold = 0.496f;
			m_distanceScale = 5.f;
			m_outlineInner = 0.f;
			m_outlineOuter = 0.f;
		};

		Vec4 m_colorTint; // 0x0 (0)
		Vec4 m_outlineColor; // 0x10 (16)
		CtrRef<UIDistanceFieldAsset> m_distanceField; // 0x20 (32)
		float m_alphaThreshold; // 0x28 (40)
		float m_distanceScale; // 0x2C (44)
		float m_outlineInner; // 0x30 (48)
		float m_outlineOuter; // 0x34 (52)
	}; // 0x40 (64)
}

