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
	class DebugEventInput;
}

namespace fb {
	class EventDebugNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventDebugNodeData"); }
		virtual ~EventDebugNodeData() override {}
		EventDebugNodeData() {
			m_enabled = true;
		};

		RefArray<DebugEventInput> m_events; // 0x10 (16)
		bool m_enabled; // 0x18 (24)
	}; // 0x20 (32)
}

