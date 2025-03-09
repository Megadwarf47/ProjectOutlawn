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
	class KitStateEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KitStateEvent"); }
		virtual ~KitStateEvent() override {}
		KitStateEvent() {
			m_secondsAsKit = 0.f;
		};

		String m_kit; // 0x18 (24)
		float m_secondsAsKit; // 0x20 (32)
	}; // 0x28 (40)
}

