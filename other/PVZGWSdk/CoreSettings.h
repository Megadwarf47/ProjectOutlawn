///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CoreLogLevel.h>
#include <fb/HardwareProfile.h>
#include <fb/String.h>
#include <fb/TelemetryReleaseType.h>
#include <fb/Types.h>

namespace fb {
	struct CoreSettings {
		CoreSettings() {
			m_logLevel = CoreLogLevel::CllDebug;
			m_dialogLevel = CoreLogLevel::CllValidate;
			m_debugOutputMode = 2;
			m_randomTimeSeed = -1;
			m_randomTickSeed = -1;
			m_randomSessionId = -1;
			m_hardwareProfile = HardwareProfile::Hardware_Autodetect;
			m_hardwareCpuBias = 0.f;
			m_hardwareGpuBias = 0.f;
			m_scatterJobYieldGranularity = 0.5f;
			m_telemetryReleaseType = TelemetryReleaseType::TELEMETRY_RELEASE_PRODUCTION;
			m_liveEditingEnable = false;
			m_userLogEnabled = false;
			m_displayAsserts = true;
			m_crashOnFatalErrors = false;
			m_useStorageServer = false;
			m_enableLocalization = true;
		};

		String m_host; // 0x0 (0)
		String m_hostUser; // 0x8 (8)
		String m_hostUserDomain; // 0x10 (16)
		String m_initSeed; // 0x18 (24)
		CoreLogLevel m_logLevel; // 0x20 (32)
		CoreLogLevel m_dialogLevel; // 0x24 (36)
		u32 m_debugOutputMode; // 0x28 (40)
		s32 m_randomTimeSeed; // 0x2C (44)
		s32 m_randomTickSeed; // 0x30 (48)
		s32 m_randomSessionId; // 0x34 (52)
		String m_gameConfigurationName; // 0x38 (56)
		HardwareProfile m_hardwareProfile; // 0x40 (64)
		float m_hardwareCpuBias; // 0x44 (68)
		float m_hardwareGpuBias; // 0x48 (72)
		String m_profileDirectoryName; // 0x50 (80)
		float m_scatterJobYieldGranularity; // 0x58 (88)
		String m_availableLanguages; // 0x60 (96)
		TelemetryReleaseType m_telemetryReleaseType; // 0x68 (104)
		bool m_liveEditingEnable; // 0x6C (108)
		bool m_userLogEnabled; // 0x6D (109)
		bool m_displayAsserts; // 0x6E (110)
		bool m_crashOnFatalErrors; // 0x6F (111)
		bool m_useStorageServer; // 0x70 (112)
		bool m_enableLocalization; // 0x71 (113)
	}; // 0x78 (120)
}

