///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AudioCurvePoint.h>
#include <fb/AudioCurveType.h>

namespace fb {
	struct AudioCurve {
		AudioCurve() {
			m_curveType = AudioCurveType::AudioCurveType_Spline;
		};

		Array<AudioCurvePoint> m_points; // 0x0 (0)
		AudioCurveType m_curveType; // 0x8 (8)
	}; // 0x10 (16)
}

