///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class PerformanceTrackerSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PerformanceTrackerSettings"); }
		virtual ~PerformanceTrackerSettings() override {}
		PerformanceTrackerSettings() {
			m_interval = 10.f;
			m_enabled = true;
			m_supressPerformanceStatsOnIdle = false;
			m_supressPerformanceStatsUntilSpawned = true;
			m_juiceLogPerformance = true;
		};

		float m_interval; // 0x20 (32)
		bool m_enabled; // 0x24 (36)
		bool m_supressPerformanceStatsOnIdle; // 0x25 (37)
		bool m_supressPerformanceStatsUntilSpawned; // 0x26 (38)
		bool m_juiceLogPerformance; // 0x27 (39)
	}; // 0x28 (40)
}

