///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class GameTimeSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameTimeSettings"); }
		virtual ~GameTimeSettings() override {}
		GameTimeSettings() {
			m_joinJobsTimeLimit = 2.f;
			m_yieldTimeLimit = 1.5f;
			m_yieldTime = 1;
			m_maxSimFps = 30.f;
			m_forceSimRate = 30;
			m_maxVariableFps = 200.f;
			m_maxInactiveVariableFps = 10.f;
			m_forceDeltaTime = -1.f;
			m_forceDeltaTickCount = -1;
			m_clampTicks = 2;
			m_timeScale = 1.f;
			m_debugFrameDelay = 0.f;
			m_useWaitableTimers = false;
			m_doubleNoTickWait = false;
			m_variableSimTickTimeEnable = false;
			m_forceUseSleepTimer = false;
			m_forceSinglePlayerFixedTick = false;
			m_forceMultiplayerOneTickMin = false;
			m_enableSinglePlayerFixedTick = true;
		};

		float m_joinJobsTimeLimit; // 0x20 (32)
		float m_yieldTimeLimit; // 0x24 (36)
		s32 m_yieldTime; // 0x28 (40)
		float m_maxSimFps; // 0x2C (44)
		u32 m_forceSimRate; // 0x30 (48)
		float m_maxVariableFps; // 0x34 (52)
		float m_maxInactiveVariableFps; // 0x38 (56)
		float m_forceDeltaTime; // 0x3C (60)
		s32 m_forceDeltaTickCount; // 0x40 (64)
		s32 m_clampTicks; // 0x44 (68)
		float m_timeScale; // 0x48 (72)
		float m_debugFrameDelay; // 0x4C (76)
		bool m_useWaitableTimers; // 0x50 (80)
		bool m_doubleNoTickWait; // 0x51 (81)
		bool m_variableSimTickTimeEnable; // 0x52 (82)
		bool m_forceUseSleepTimer; // 0x53 (83)
		bool m_forceSinglePlayerFixedTick; // 0x54 (84)
		bool m_forceMultiplayerOneTickMin; // 0x55 (85)
		bool m_enableSinglePlayerFixedTick; // 0x56 (86)
	}; // 0x58 (88)
}

