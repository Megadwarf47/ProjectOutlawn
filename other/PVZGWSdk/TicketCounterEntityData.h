///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/TeamId.h>
#include <fb/TicketCountPercentage.h>
#include <fb/TicketDecreaseType.h>

namespace fb {
	class TicketCounterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TicketCounterEntityData"); }
		virtual ~TicketCounterEntityData() override {}
		TicketCounterEntityData() {
			m_teamId = TeamId::Team1;
			m_ticketLossWhenLostAll = 9999;
			m_ticketLossWhenLostAllControlsPoint = 9999;
			m_ticketLossPerMin = 10;
			m_ticketLossStart = 100;
			m_initialTicketCount = 100;
			m_decreaseTickets = TicketDecreaseType::TDTOnKilled;
			m_ignoreAI = false;
			m_ignoreAIVictims = false;
			m_setBestSquadSpawner = true;
			m_haltTicketLossOnEqualPointCount = false;
			m_resetCapturePointsOnReset = false;
			m_spawnAlwaysAllowed = false;
			m_isActive = true;
		};

		TeamId m_teamId; // 0x18 (24)
		s32 m_ticketLossWhenLostAll; // 0x1C (28)
		s32 m_ticketLossWhenLostAllControlsPoint; // 0x20 (32)
		s32 m_ticketLossPerMin; // 0x24 (36)
		Array<TicketCountPercentage> m_ticketPercentages; // 0x28 (40)
		s32 m_ticketLossStart; // 0x30 (48)
		s32 m_initialTicketCount; // 0x34 (52)
		TicketDecreaseType m_decreaseTickets; // 0x38 (56)
		bool m_ignoreAI; // 0x3C (60)
		bool m_ignoreAIVictims; // 0x3D (61)
		bool m_setBestSquadSpawner; // 0x3E (62)
		bool m_haltTicketLossOnEqualPointCount; // 0x3F (63)
		bool m_resetCapturePointsOnReset; // 0x40 (64)
		bool m_spawnAlwaysAllowed; // 0x41 (65)
		bool m_isActive; // 0x42 (66)
	}; // 0x48 (72)
}

