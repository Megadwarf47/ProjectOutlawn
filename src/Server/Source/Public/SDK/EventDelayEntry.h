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
	class EventDelayEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventDelayEntry"); }
		virtual ~EventDelayEntry() override {}
		EventDelayEntry() {
		};

		AudioGraphNodePort m_event; // 0x10 (16)
		AudioGraphNodePort m_reset; // 0x18 (24)
		AudioGraphNodePort m_frames; // 0x20 (32)
		AudioGraphNodePort m_out; // 0x28 (40)
	}; // 0x30 (48)
}

