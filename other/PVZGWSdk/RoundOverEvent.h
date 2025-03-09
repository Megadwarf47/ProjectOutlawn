///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>

namespace fb {
	class RoundOverEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RoundOverEvent"); }
		virtual ~RoundOverEvent() override {}
		RoundOverEvent() {
			m_winningTeam = 0;
			m_ticketsLeft = 0;
		};

		s32 m_winningTeam; // 0x18 (24)
		s32 m_ticketsLeft; // 0x1C (28)
	}; // 0x20 (32)
}

