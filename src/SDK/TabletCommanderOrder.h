///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderOrderReplyType.h>
#include <fb/CommanderOrderType.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderOrder {
		TabletCommanderOrder() {
			m_orderType = CommanderOrderType::CommanderOrderType_None;
			m_replyType = CommanderOrderReplyType::CommanderOrderReplyType_Pending;
			m_issuedToPlayerId = 0;
			m_controlPointId = 0;
			m_controllableId = 0;
			m_targetX = 0;
			m_targetY = 0;
		};

		CommanderOrderType m_orderType; // 0x0 (0)
		CommanderOrderReplyType m_replyType; // 0x4 (4)
		u32 m_issuedToPlayerId; // 0x8 (8)
		u32 m_controlPointId; // 0xC (12)
		u32 m_controllableId; // 0x10 (16)
		u16 m_targetX; // 0x14 (20)
		u16 m_targetY; // 0x16 (22)
	}; // 0x18 (24)
}

