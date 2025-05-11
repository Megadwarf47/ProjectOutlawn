///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class KillEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KillEvent"); }
		virtual ~KillEvent() override {}
		KillEvent() {
			m_victimId = 0;
			m_time = 0.f;
		};

		Vec3 m_position; // 0x20 (32)
		Vec3 m_victimPosition; // 0x30 (48)
		u64 m_victimId; // 0x40 (64)
		float m_time; // 0x48 (72)
		String m_weapon; // 0x50 (80)
	}; // 0x60 (96)
}

