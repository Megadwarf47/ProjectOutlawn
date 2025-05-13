///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class SoundWaveAsset;
}

namespace fb {
	struct AntiSpamConfig {
		AntiSpamConfig() {
			m_detectionInterval = 6.f;
			m_detectionIntervalMaxMessageCount = 6;
			m_serverSideMessageCountTolerance = 1;
			m_secondsBlocked = 30;
			m_serverSideSecondsBlockedTolerance = 3;
		};

		float m_detectionInterval; // 0x0 (0)
		u32 m_detectionIntervalMaxMessageCount; // 0x4 (4)
		u32 m_serverSideMessageCountTolerance; // 0x8 (8)
		u32 m_secondsBlocked; // 0xC (12)
		u32 m_serverSideSecondsBlockedTolerance; // 0x10 (16)
		String m_notificationSid; // 0x18 (24)
		String m_stillBlockedSid; // 0x20 (32)
		CtrRef<SoundWaveAsset> m_warningSound; // 0x28 (40)
	}; // 0x30 (48)
}

