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
	class LinkSendNodeEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinkSendNodeEntry"); }
		virtual ~LinkSendNodeEntry() override {}
		LinkSendNodeEntry() {
		};

		AudioGraphNodePort m_input; // 0x10 (16)
		String m_sendName; // 0x18 (24)
	}; // 0x20 (32)
}

