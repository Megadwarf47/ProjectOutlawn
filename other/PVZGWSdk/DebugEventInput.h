///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/String.h>

namespace fb {
	class DebugEventInput : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugEventInput"); }
		virtual ~DebugEventInput() override {}
		DebugEventInput() {
			m_requireTriggeredAndSet = true;
		};

		AudioGraphNodePort m_e; // 0x10 (16)
		String m_name; // 0x18 (24)
		bool m_requireTriggeredAndSet; // 0x20 (32)
	}; // 0x28 (40)
}

