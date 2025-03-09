///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class DemoSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DemoSettings"); }
		virtual ~DemoSettings() override {}
		DemoSettings() {
			m_changePlayerInterval = 0;
			m_forcedDeltaTickCount = 0;
			m_startProfilingOnFrame = 0;
			m_stopProfilingOnFrame = 0;
			m_takeScreenshotOnFrame = 0;
			m_pauseOnStartup = false;
			m_allowOverwrite = true;
			m_logPerformance = true;
			m_suppressDebugLog = false;
			m_shutdownOnDemoComplete = false;
			m_loopingDemo = true;
			m_lockToRandomPlayer = false;
		};

		String m_recordDemoFileName; // 0x10 (16)
		String m_playbackDemoFileName; // 0x18 (24)
		String m_timeDemo; // 0x20 (32)
		String m_lockToPlayerName; // 0x28 (40)
		u32 m_changePlayerInterval; // 0x30 (48)
		u32 m_forcedDeltaTickCount; // 0x34 (52)
		u32 m_startProfilingOnFrame; // 0x38 (56)
		u32 m_stopProfilingOnFrame; // 0x3C (60)
		u32 m_takeScreenshotOnFrame; // 0x40 (64)
		bool m_pauseOnStartup; // 0x44 (68)
		bool m_allowOverwrite; // 0x45 (69)
		bool m_logPerformance; // 0x46 (70)
		bool m_suppressDebugLog; // 0x47 (71)
		bool m_shutdownOnDemoComplete; // 0x48 (72)
		bool m_loopingDemo; // 0x49 (73)
		bool m_lockToRandomPlayer; // 0x4A (74)
	}; // 0x50 (80)
}

