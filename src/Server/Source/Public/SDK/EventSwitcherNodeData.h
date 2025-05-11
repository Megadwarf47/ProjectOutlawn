///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/RefArray.h>

namespace fb {
	class EventSwitcherEntry;
}

namespace fb {
	class EventSwitcherNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventSwitcherNodeData"); }
		virtual ~EventSwitcherNodeData() override {}
		EventSwitcherNodeData() {
			m_defaultValue = 0.f;
		};

		RefArray<EventSwitcherEntry> m_inputs; // 0x10 (16)
		AudioGraphNodePort m_value; // 0x18 (24)
		float m_defaultValue; // 0x20 (32)
	}; // 0x28 (40)
}

