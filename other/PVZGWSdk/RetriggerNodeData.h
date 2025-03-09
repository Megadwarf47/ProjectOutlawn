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
#include <fb/RetriggerPlayback.h>

namespace fb {
	class RetriggerGroup;
}

namespace fb {
	class RetriggerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RetriggerNodeData"); }
		virtual ~RetriggerNodeData() override {}
		RetriggerNodeData() {
			m_playback = RetriggerPlayback::Sequential;
			m_immediateStart = false;
		};

		AudioGraphNodePort m_triggerIn; // 0x10 (16)
		AudioGraphNodePort m_stop; // 0x18 (24)
		AudioGraphNodePort m_interval; // 0x20 (32)
		AudioGraphNodePort m_intervalVariation; // 0x28 (40)
		AudioGraphNodePort m_repeat; // 0x30 (48)
		AudioGraphNodePort m_repeatVariation; // 0x38 (56)
		RefArray<RetriggerGroup> m_retriggerGroups; // 0x40 (64)
		RetriggerPlayback m_playback; // 0x48 (72)
		bool m_immediateStart; // 0x4C (76)
	}; // 0x50 (80)
}

