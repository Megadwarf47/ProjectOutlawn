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
	class EventSequencerOutEvent : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventSequencerOutEvent"); }
		virtual ~EventSequencerOutEvent() override {}
		EventSequencerOutEvent() {
		};

		AudioGraphNodePort m_out; // 0x10 (16)
	}; // 0x18 (24)
}

