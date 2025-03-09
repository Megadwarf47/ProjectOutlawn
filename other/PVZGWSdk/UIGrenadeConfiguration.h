///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct UIGrenadeConfiguration {
		UIGrenadeConfiguration() {
			m_iconVerticalOffset = 0.3f;
			m_fadeStartDist = 15.f;
			m_disappearDist = 20.f;
			m_warningFadeStartDist = 5.f;
			m_warningDisappearDist = 8.f;
			m_maxScaleAtDist = 0.f;
			m_minScaleAtDist = 12.f;
			m_maxScale = 1.2f;
			m_minScale = 0.4f;
			m_magneticEdgeOffsetMultiplierNear = 3.f;
			m_magneticEdgeOffsetMultiplierFar = 0.f;
			m_magneticEdgeNearDist = 12.f;
			m_magneticEdgeFarDist = 16.f;
		};

		float m_iconVerticalOffset; // 0x0 (0)
		float m_fadeStartDist; // 0x4 (4)
		float m_disappearDist; // 0x8 (8)
		float m_warningFadeStartDist; // 0xC (12)
		float m_warningDisappearDist; // 0x10 (16)
		float m_maxScaleAtDist; // 0x14 (20)
		float m_minScaleAtDist; // 0x18 (24)
		float m_maxScale; // 0x1C (28)
		float m_minScale; // 0x20 (32)
		float m_magneticEdgeOffsetMultiplierNear; // 0x24 (36)
		float m_magneticEdgeOffsetMultiplierFar; // 0x28 (40)
		float m_magneticEdgeNearDist; // 0x2C (44)
		float m_magneticEdgeFarDist; // 0x30 (48)
	}; // 0x34 (52)
}

