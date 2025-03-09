///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SplineType.h>
#include <fb/Vec4.h>

namespace fb {
	struct SplineCurve {
		SplineCurve() {
			m_xValues0 = Vec4(0.f, 0.25f, 0.5f, 0.75f);
			m_yValues3 = Vec4(0.f, 1.f, 0.f, 0.f);
			m_splineType = SplineType::SplineType_5ControlPoints;
		};

		Vec4 m_xValues0; // 0x0 (0)
		Vec4 m_xValues1; // 0x10 (16)
		Vec4 m_xValues2; // 0x20 (32)
		Vec4 m_yValues0; // 0x30 (48)
		Vec4 m_yValues1; // 0x40 (64)
		Vec4 m_yValues2; // 0x50 (80)
		Vec4 m_yValues3; // 0x60 (96)
		Vec4 m_gValues0; // 0x70 (112)
		Vec4 m_gValues1; // 0x80 (128)
		Vec4 m_gValues2; // 0x90 (144)
		Vec4 m_gValues3; // 0xA0 (160)
		Vec4 m_gValues4; // 0xB0 (176)
		Vec4 m_gValues5; // 0xC0 (192)
		SplineType m_splineType; // 0xD0 (208)
	}; // 0xE0 (224)
}

