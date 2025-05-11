///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIPerformanceMetric.h>

namespace fb {
	struct UIPerformanceMetricSettings {
		UIPerformanceMetricSettings() {
			m_metricType = UIPerformanceMetric::UIPerformanceMetric_FramesPerSecond;
			m_highThreshold = 0.f;
			m_lowThreshold = 0.f;
			m_lessIsBetter = false;
		};

		UIPerformanceMetric m_metricType; // 0x0 (0)
		float m_highThreshold; // 0x4 (4)
		float m_lowThreshold; // 0x8 (8)
		String m_goodSid; // 0x10 (16)
		String m_mediumSid; // 0x18 (24)
		String m_badSid; // 0x20 (32)
		String m_goodHeaderSid; // 0x28 (40)
		String m_mediumHeaderSid; // 0x30 (48)
		String m_badHeaderSid; // 0x38 (56)
		bool m_lessIsBetter; // 0x40 (64)
	}; // 0x48 (72)
}

