///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TabletCommanderPacketType.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderPacketBase {
		TabletCommanderPacketBase() {
			m_packetType = TabletCommanderPacketType::TabletCommanderPacketType_HighFrequency;
			m_serverTime = 0.f;
			m_packetFrequency = 0;
		};

		TabletCommanderPacketType m_packetType; // 0x0 (0)
		float m_serverTime; // 0x4 (4)
		u8 m_packetFrequency; // 0x8 (8)
	}; // 0xC (12)
}

