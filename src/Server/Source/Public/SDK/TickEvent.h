///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>
#include <fb/Vec3.h>

namespace fb {
	class TickEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TickEvent"); }
		virtual ~TickEvent() override {}
		TickEvent() {
			m_time = 0.f;
		};

		Vec3 m_position; // 0x20 (32)
		float m_time; // 0x30 (48)
	}; // 0x40 (64)
}

