///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>
#include <fb/String.h>

namespace fb {
	class RoundEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RoundEvent"); }
		virtual ~RoundEvent() override {}
		RoundEvent() {
			m_juiceSessionId = 0;
		};

		String m_levelName; // 0x18 (24)
		s32 m_juiceSessionId; // 0x20 (32)
	}; // 0x28 (40)
}

