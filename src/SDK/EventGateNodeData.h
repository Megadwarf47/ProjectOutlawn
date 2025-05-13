///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>

namespace fb {
	class EventGateNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventGateNodeData"); }
		virtual ~EventGateNodeData() override {}
		EventGateNodeData() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		AudioGraphNodePort m_coolDownTime; // 0x20 (32)
		AudioGraphNodePort m_enable; // 0x28 (40)
	}; // 0x30 (48)
}

