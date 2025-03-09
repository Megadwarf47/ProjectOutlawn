///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/TimerMode.h>

namespace fb {
	class TimerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TimerNodeData"); }
		virtual ~TimerNodeData() override {}
		TimerNodeData() {
			m_mode = TimerMode::TimerMode_Repeating;
		};

		AudioGraphNodePort m_start; // 0x10 (16)
		AudioGraphNodePort m_stop; // 0x18 (24)
		AudioGraphNodePort m_period; // 0x20 (32)
		AudioGraphNodePort m_tick; // 0x28 (40)
		AudioGraphNodePort m_progress; // 0x30 (48)
		TimerMode m_mode; // 0x38 (56)
	}; // 0x40 (64)
}

