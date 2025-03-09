///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/TabletCommanderMessageType.h>
#include <fb/TabletCommanderPacketBase.h>

namespace fb {
	struct TabletCommanderMessageListPacket {
		TabletCommanderMessageListPacket() {
		};

		TabletCommanderPacketBase m_packetBase; // 0x0 (0)
		Array<TabletCommanderMessageType> m_messageTypeList; // 0x10 (16)
	}; // 0x18 (24)
}

