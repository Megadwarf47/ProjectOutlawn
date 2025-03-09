///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>

namespace fb {
	class EventSwitcherEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventSwitcherEntry"); }
		virtual ~EventSwitcherEntry() override {}
		EventSwitcherEntry() {
			m_value = 0.f;
		};

		AudioGraphNodePort m_caseTrigger; // 0x10 (16)
		float m_value; // 0x18 (24)
	}; // 0x20 (32)
}

