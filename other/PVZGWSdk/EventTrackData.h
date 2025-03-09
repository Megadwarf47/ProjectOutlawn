///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EventKeyframe.h>
#include <fb/SchematicPinTrackData.h>

namespace fb {
	class EventTrackData : public SchematicPinTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventTrackData"); }
		virtual ~EventTrackData() override {}
		EventTrackData() {
			m_fireEventsUponSkip = true;
			m_updatePropertiesAtEvents = false;
		};

		Array<EventKeyframe> m_keyframes; // 0x30 (48)
		bool m_fireEventsUponSkip; // 0x38 (56)
		bool m_updatePropertiesAtEvents; // 0x39 (57)
	}; // 0x40 (64)
}

