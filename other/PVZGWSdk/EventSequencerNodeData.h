///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/EventSequencerPlayback.h>
#include <fb/RefArray.h>

namespace fb {
	class EventSequencerOutEvent;
}

namespace fb {
	class EventSequencerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventSequencerNodeData"); }
		virtual ~EventSequencerNodeData() override {}
		EventSequencerNodeData() {
			m_playback = EventSequencerPlayback::EventSequencerPlayback_Sequential;
			m_ignoreFirstInterval = false;
		};

		AudioGraphNodePort m_start; // 0x10 (16)
		AudioGraphNodePort m_stop; // 0x18 (24)
		AudioGraphNodePort m_interval; // 0x20 (32)
		AudioGraphNodePort m_intervalVariation; // 0x28 (40)
		AudioGraphNodePort m_repeat; // 0x30 (48)
		AudioGraphNodePort m_repeatVariation; // 0x38 (56)
		RefArray<EventSequencerOutEvent> m_outEvents; // 0x40 (64)
		EventSequencerPlayback m_playback; // 0x48 (72)
		bool m_ignoreFirstInterval; // 0x4C (76)
	}; // 0x50 (80)
}

