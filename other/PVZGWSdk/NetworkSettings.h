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
	class NetworkSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NetworkSettings"); }
		virtual ~NetworkSettings() override {}
		NetworkSettings() {
			m_protocolVersion = 0;
			m_clientPort = 25100;
			m_serverPort = 25200;
			m_maxGhostCount = 8192;
			m_maxClientToServerGhostCount = 8;
			m_maxClientCount = 68;
			m_maxClientFrameSize = 2048;
			m_maxServerFrameSize = 65536;
			m_timeNudgeGhostFrequencyFactor = 1.f;
			m_timeNudgeBias = 0.01f;
			m_connectTimeout = 15.f;
			m_packetLossLogInterval = 0.f;
			m_maxLocalPlayerCount = 1;
			m_incrementServerPortOnFail = true;
			m_useFrameManager = false;
			m_timeSyncEnabled = true;
		};

		u32 m_protocolVersion; // 0x10 (16)
		String m_titleId; // 0x18 (24)
		u32 m_clientPort; // 0x20 (32)
		u32 m_serverPort; // 0x24 (36)
		u32 m_maxGhostCount; // 0x28 (40)
		u32 m_maxClientToServerGhostCount; // 0x2C (44)
		u32 m_maxClientCount; // 0x30 (48)
		u32 m_maxClientFrameSize; // 0x34 (52)
		u32 m_maxServerFrameSize; // 0x38 (56)
		String m_xlspAddress; // 0x40 (64)
		String m_serverAddress; // 0x48 (72)
		String m_clientConnectionDebugFilePrefix; // 0x50 (80)
		String m_serverConnectionDebugFilePrefix; // 0x58 (88)
		float m_timeNudgeGhostFrequencyFactor; // 0x60 (96)
		float m_timeNudgeBias; // 0x64 (100)
		float m_connectTimeout; // 0x68 (104)
		float m_packetLossLogInterval; // 0x6C (108)
		u32 m_maxLocalPlayerCount; // 0x70 (112)
		bool m_incrementServerPortOnFail; // 0x74 (116)
		bool m_useFrameManager; // 0x75 (117)
		bool m_timeSyncEnabled; // 0x76 (118)
	}; // 0x78 (120)
}

