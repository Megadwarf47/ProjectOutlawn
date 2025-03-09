///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/RefArray.h>

namespace fb {
	class EventDelayEntry;
}

namespace fb {
	class EventDelayNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventDelayNodeData"); }
		virtual ~EventDelayNodeData() override {}
		EventDelayNodeData() {
		};

		RefArray<EventDelayEntry> m_eventDelayNodeSegment; // 0x10 (16)
	}; // 0x18 (24)
}

